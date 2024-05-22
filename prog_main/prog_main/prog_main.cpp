#include <iostream>
/**
    @file		prog_main.cpp
    @brief		���� ��������� ����
    @copyright	����
    @author		���������� �. �.
    @date		22-05-2024
    @version	1.0.0
*/
using namespace std;


/// ������� ����� ����� X
/**
    �������� �������� ���������� num_X � ����������� ������������ �����
    \param num_X ����������� ����� X
*/
void EnterX(int &num_X)
{
    do {
        cout << "������� X:";
        cin >> num_X;
    } while (num_X <= 0);
}

/// ������� ����� ����� N
/**
    �������� �������� ���������� num_N � ����������� ������������ �����
    \param num_N ����������� ����� ��� ����������� ������������ ��������� N ���� ����� X
*/
void EnterN(int &num_N, int &num_X)
{
    do {
        cout << "������� N: ";
        cin >> num_N;
    } while (num_N >= num_X || num_N <= 0);
}

/// �������, ����������� ������������ ��������� N ���� ������������ ����� X
/**
    ������� ��������� ����� ����� X ��� ������ ������� �� ������� �� 10, ����� ����� ����� X �� 10, ����� �������� ��������� ����� � ��� N ���
*/
void MultiplyN(int num_X, int num_N)
{
    int res = 1;
    int mult = 0;
    for (int i = 0; i < num_N; i++)
    {
        mult = num_X % 10;
        num_X = num_X / 10;
        res = res * mult;
    }
    cout << "������������ ��������� N ����: " << res << endl;
}

/// ������� ��� ����������� ���-�� ���� ����� X
/**
    ����� ����� X � ����������� ���������� count �� 1 �� ��� ���, ���� ��������� ������� �� ����� ������ 0
*/
void CountNumX(int num_X)
{
    int count = 1;
    while (num_X / 10 != 0)
    {
        count++;
        num_X = num_X / 10;
    }
    cout << "���-�� ���� � ����� X: " << count;
}

int main()
{
    setlocale(LC_ALL, "rus");

/// ����� ������� ������� � �� ���������
    cout << "1. ������ ����������� ����� X" << endl;
    cout << "2. ������ ����� N (������� ������ ����� �������� ����� X)" << endl;
    cout << "3. ���������� ������������ ��������� N ���� ������������ ����� X" << endl;
    cout << "4. ���������� ���������� ���� ���������� ����� X" << endl;
    cout << "������� ����� ������� (1-4) ��� 0 ��� ������: ";
    int k, x, n;
    cin >> k;
/// ����� �������
/**
    ����������� ������������ ������� � ����������� �� ����, ����� ����� �� �������
*/
    switch (k) {
    case 1: 
        EnterX(x);
        break;
    case 2:
        EnterN(n, x);
        break;
    case 3: 
        MultiplyN(x, n);
        break;
    case 4:
        CountNumX(x);
        break;
    default:
        cout << "������ �����!";
        break;
    }
}


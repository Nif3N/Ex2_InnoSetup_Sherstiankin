
#include <iostream>

using namespace std;

void EnterX(int &num_X)
{

}
void EnterN(int &num_N)
{

}
void MultiplyN(int num_X, int num_N)
{

}
void CountNumX(int num_X)
{

}

int main()
{
    cout << "1. ������ ����������� ����� X";
    cout << "2. ������ ����� N (������� ������ ����� �������� ����� X)";
    cout << "3. ���������� ������������ ��������� N ���� ������������ ����� X";
    cout << "4. ���������� ���������� ���� ���������� ����� X";
    cout << "������� ����� ������� (1-4) ��� 0 ��� ������: ";

    int k, x, n;
    cin >> k;
    switch (k) {
    case 1: 
        EnterX(x);
    case 2:
        EnterN(n);
    case 3: 
        MultiplyN(x, n);
    case 4:
        CountNumX(x);
    default:
        cout << "������ �����!";
    }
}


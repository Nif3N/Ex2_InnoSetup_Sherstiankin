
#include <iostream>

using namespace std;

void EnterX(int &num_X)
{

}
void EnterN(int &num_N, int &num_X)
{
    do {
        cout << "������� N: ";
        cin >> num_N;
    } while (num_N >= num_X || num_N <= 0);
}
void MultiplyN(int num_X, int num_N)
{

}
void CountNumX(int num_X)
{

}

int main()
{
    cout << "1. ������ ����������� ����� X" << endl;
    cout << "2. ������ ����� N (������� ������ ����� �������� ����� X)" << endl;
    cout << "3. ���������� ������������ ��������� N ���� ������������ ����� X" << endl;
    cout << "4. ���������� ���������� ���� ���������� ����� X" << endl;
    cout << "������� ����� ������� (1-4) ��� 0 ��� ������: ";
    int k, x, n;
    cin >> k;
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


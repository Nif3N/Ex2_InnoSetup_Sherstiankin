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
void CountNumX(int num_X)
{

}

int main()
{
    setlocale(LC_ALL, "rus");
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
        EnterN(n);
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


#include <iostream>

using namespace std;

void EnterX(int &num_X)
{
    do {
        cout << "������� X:";
        cin >> num_X;
    } while (num_X <= 0);
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
<<<<<<< HEAD
    setlocale(LC_ALL, "rus");
=======
<<<<<<< HEAD
<<<<<<< HEAD
=======
    setlocale(LC_ALL, "rus");
>>>>>>> 969c4fe1bc45bbfe24f07870ada95b5c9e14ea0b
=======
    setlocale(LC_ALL, "rus");
>>>>>>> origin/main
>>>>>>> 19c2d45274411776d18a9d90124981b2e95f5ba7
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
<<<<<<< HEAD
        EnterN(n, x);
=======
        EnterN(n);
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 969c4fe1bc45bbfe24f07870ada95b5c9e14ea0b
=======
>>>>>>> origin/main
>>>>>>> 19c2d45274411776d18a9d90124981b2e95f5ba7
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


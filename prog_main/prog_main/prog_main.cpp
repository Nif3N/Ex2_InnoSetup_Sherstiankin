#include <iostream>
/**
    @file		prog_main.cpp
    @brief		Файл исходного кода
    @copyright	ВоГУ
    @author		Шерстянкин Н. Р.
    @date		22-05-2024
    @version	1.0.0
*/
using namespace std;


/// Функция ввода числа X
/**
    Вводится значение переменной num_X и проверяется корректность ввода
    \param num_X натуральное число X
*/
void EnterX(int &num_X)
{
    do {
        cout << "Введите X:";
        cin >> num_X;
    } while (num_X <= 0);
}

/// Функция ввода числа N
/**
    Вводится значение переменной num_N и проверяется корректность ввода
    \param num_N натуральное число для определения произведения последних N цифр числа X
*/
void EnterN(int &num_N, int &num_X)
{
    do {
        cout << "Введите N: ";
        cin >> num_N;
    } while (num_N >= num_X || num_N <= 0);
}

/// Функция, вычисляющая произведение последних N цифр натурального числа X
/**
    Находим последнюю цифру числа X при помощи остатка от деления на 10, затем делим число X на 10, чтобы получить следующую цифру и так N раз
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
    cout << "Произведение последних N цифр: " << res << endl;
}

/// Функция для определения кол-ва цифр числа X
/**
    Делим число X и увеличиваем переменную count на 1 до тех пор, пока результат деления не будет равным 0
*/
void CountNumX(int num_X)
{
    int count = 1;
    while (num_X / 10 != 0)
    {
        count++;
        num_X = num_X / 10;
    }
    cout << "Кол-во цифр в числе X: " << count;
}

int main()
{
    setlocale(LC_ALL, "rus");

/// Вывод номеров функций с их описанием
    cout << "1. Ввести натуральное число X" << endl;
    cout << "2. Ввести цифру N (которая меньше числа разрядов числа X)" << endl;
    cout << "3. Определить произведение последних N цифр натурального числа X" << endl;
    cout << "4. Определить количество цифр введенного числа X" << endl;
    cout << "Введите номер функции (1-4) или 0 для выхода: ";
    int k, x, n;
    cin >> k;
/// Выбор функции
/**
    Выполняется определенная функция в зависимости от того, какой номер мы указали
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
        cout << "Ошибка ввода!";
        break;
    }
}


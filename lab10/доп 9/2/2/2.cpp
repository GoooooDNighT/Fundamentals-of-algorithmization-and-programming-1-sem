﻿// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <locale>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;

	int a, b, n, p;
	unsigned int maska;
	unsigned int maskb = (1 << 5) - 1;
	unsigned int maskc;
	char tmp[33];

	cout << "Введите число A: ";
	cin >> a;

	_itoa_s(a, tmp, 2);



	cout << "Введите число B: ";
	cin >> b;

	_itoa_s(b, tmp, 2);

	cout << "Число B в 2 системе счисления: " << tmp << endl;

	cout << "Введите число n: ";
	cin >> n;

	cout << "Введите число p: ";
	cin >> p;

	maskb = (1 << n) - 1;
	maskb <<= (p - n);
	maskb ^= a;
	maskb &= a;

	cout << "Итоговое число в 10 системе счисления: " << maskb << endl;

	_itoa_s(maskb, tmp, 2);
	cout << "Итоговое число в 2 системе счисления: " << tmp;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

﻿// Variant 7(2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double a, b, c, f, x, y, z;
	cout << "Введите значения чисел a,b,c: " << endl;
	cout << "a= ";  cin >> a;
	cout << "b= ";  cin >> b;
	cout << "c= ";  cin >> c;
	if ((a < b) && (b < c) && (a < c))
	{
		a = c; b = c;
		cout << "a= " << a << endl;
		cout << "b= " << b << endl;
		cout << "c= " << c << endl;
	}
	else if ((c < b) && (b < a) && (c < a))
		{
		cout << "a= " << a << endl;
		cout << "b= " << b << endl;
		cout << "c= " << c << endl;
		}
	else 
		{
		x = pow(a, 2); y = pow(b, 2); z = pow(c, 2);
		cout << "a= " << x << endl;
		cout << "b= " << y << endl;
		cout << "c= " << z << endl;
		}
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

﻿// Variant 7(2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void main()
{setlocale(LC_CTYPE, "Russian");
	float x = 0.9, y = 2.0, t = 6.96e-5,i=1,sd,z,q;
	sd = 1.0 / 2.0;
	while (i < 2.2)
	{
		z = t * pow(y, 2) - pow((i + x), sd) * tan(y);
		q = pow(pow(z, 2) + 5 * z, sd) * log(y);
		cout << "Числа z= " << z << endl;
		cout << "Числа q= " << q << endl;
		i = i + 0.2;
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

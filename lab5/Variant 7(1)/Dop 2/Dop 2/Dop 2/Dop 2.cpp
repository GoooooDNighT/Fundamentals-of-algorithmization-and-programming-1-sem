﻿// Dop 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
void main()
{
 setlocale(LC_CTYPE, "Russian");
 int a, b, c, d, i, f, x, y;
 for (x = 100000; x < 1000000; x++) {
 a = x / 100000;
 b = x / 10000 - a * 10;
 c = x / 1000 - (a * 100 + b * 10);
 d = x / 100 - (a * 1000 + b * 100 + c * 10);
 i = x / 10 - (a * 10000 + b * 1000 + c * 100 + d * 10);
 f = x - (a * 100000 + b * 10000 + c * 1000 + d * 100 + i * 10);
 y = a + b + c + d + i + f;
 if (y % 7 == 0)
 x = x + 1;
 a = x / 100000;
 b = x / 10000 - a * 10;
 c = x / 1000 - (a * 100 + b * 10);
 d = x / 100 - (a * 1000 + b * 100 + c * 10);
 i = x / 10 - (a * 10000 + b * 1000 + c * 100 + d * 10);
 f = x - (a * 100000 + b * 10000 + c * 1000 + d * 100 + i * 10);
 y = a + b + c + d + i + f;

 if (y % 7 == 0)
 cout<< "два удачных"<<endl;
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

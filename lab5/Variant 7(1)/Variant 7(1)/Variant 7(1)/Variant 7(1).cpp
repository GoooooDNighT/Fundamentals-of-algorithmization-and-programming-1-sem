﻿// Variant 7(1).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    float x=0.9, y=2.0, t=6.96e-5, z, q, sd,i;  
        sd = 1.0 / 2.0;
        for (int l = 0; l < 3; l++)
        {
            cin >> i;
            z = t * pow(y, 2) - pow((i + x), sd) * tan(y);
            q = pow(pow(z, 2) + 5 * z, sd) * log(y);
            cout << "z= " << z<<endl;
            cout << "q= " << q<<endl;
            
        }
         return(0);
                
   
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

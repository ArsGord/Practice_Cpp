﻿// 2. б) Может ли ферзь достичь клетки за 1 ход.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS"); // Добавление русской локали
    cout << "Шахматная доска (8 x 8 клеток).\n" << "Введите координаты ферзя (k, l)\n";
    short k, l;
    cin >> k >> l; // Ввод координат ферзя и поля с клавиатуры
    cout << "Введите координаты поля (m, n)\n";
    short m, n;
    cin >> m >> n;

    if ((k == m) // Если ферзь и данная клетка находятся в одной строке
        || (l == n) // Или в одном столбце
        || (k - l == m - n) // Или по диагонали с левого верхнего угла до правого нижнего
        || (k + l == m + n)) // Или по диагонали с правого верхнего угла до левого нижнего
        cout << "Ферзь может достичь это поле за 1 ход."; // Вывод ответа
    else cout << "Ферзь не может достичь это поле за 1 ход.";
    return 0;
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

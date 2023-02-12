﻿// Задание #1
// 
// ДЗ №17 Климов (раздел массива)
//
//Написать программу, копирующую последовательно элементы
//одного массива размером 10 элементов в 2 массива размером
//5 элементов каждый.Элементы первоначального массива можно
//сгенерировать в произвольном диапазоне.

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int arrayFull[50];
	int arrayFirstHalf[25];
	int arrayLastHalf[25];
	int N=0, a = 0, b = 0;

	cout << "\n ************************************************************************" << endl;
	cout << " * Программа копирования элементов массива и раздела его на два массива *" << endl;
	cout << " ************************************************************************" << endl;

	cout << "Введите размер массива до 50: " << "\n";
	cin >> N;
	cout << "Необходимо ввести значения для рандомного заполнения массива." << "\n";
	cout << "Введите начальное значения для рандомайзера: " << "\n";
	cin >> a;
	cout << "Введите конечное значения для рандомайзера: " << "\n";
	cin >> b;
	cout << "Массив: " << "\n";

	for (int i = 0; i < N; i++)
	{
		arrayFull[i] = a + rand() % (b - a);
		
		cout << arrayFull[i]<<" ";

	}
	cout << "\n";

	cout << "Первый скопированный массив: " << "\n";

	for (int j = 0; j < N/2; j++)
	{
		arrayFirstHalf[j] = arrayFull[j];

		cout << arrayFull[j] << " ";
	}
	cout << "\n";

	cout << "Второй скопированный массив: " << "\n";

	for (int k = 0; k < N/2; k++)
	{
		arrayLastHalf[k] = arrayFull[k+N/2];

		cout << arrayLastHalf[k] << " ";
	}

	cout << "\n";
	system("pause");

	return 0;
}

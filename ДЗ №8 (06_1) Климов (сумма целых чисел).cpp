﻿// Задание #1
// 
// ДЗ #8 Климов (сумма целых чисел).cpp 
// 
//Напишите программу, которая вычисляет сумму целых
//чисел от #1 до числа #2 (значение a вводится с клавиатуры).


#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	
	int number1 = 0, number2 = 0, sumNumber = 0 ;
	
	cout << "********************************************************" << endl;
	cout << "*        Программа вычисления суммы целых чисел        *" << endl;
	cout << "********************************************************" << endl << endl;
	
	cout << R"(Введите любое целое число, от которого 
будет считаться сумма целых чисел: )";
	cin >> number1;
	cout << "\n";

	cout << R"(Введите любое целое число, до которого (включительно)
будет считаться сумма целых чисел: )";
	cin >> number2;

		for (int i = number1; i <= number2; i++)//цикл (начало цикла от числа #1, конец цикла до числа #2, шаг цикла 1)
		{
			sumNumber = sumNumber + i;//тело цикла: сумма чисел, начиная с числа #1 ( т.к. первая сумма =0) плюс следующее число
		}
		cout << "\nСумма всех целых чисел от " << number1 << " до " << number2 << " равна: " << sumNumber << endl << endl;


	system("pause");

	return 0;

}


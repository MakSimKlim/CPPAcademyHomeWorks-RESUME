﻿//Задание №1
//
// ДЗ №44_45 Климов (Препроцессор)
//
// Создать проект в котором
//    1. Cоздать три файла : function.h, function.cpp, prog.cpp.
//    2. В файле function.cpp необходимо написать следующие функции для работы с массивом данных :
//+ a) функцию для заполнения массива случайными зна­че ниями;
//+ b) функцию для вывода значений массива на консоль;
//+ c) функцию для поиска минимального элемента;
//+ d) функцию для поиска максимального элемента;
//+ e) функцию для сортировки;
//+ f) функцию для редактирования значения массива.
// Данные функции необходимо написать для работы с массивом целых, действительных и символьных
// значений. (Для каждого типа написать отдельную функцию).
//    3.  В файле function.h нужно:
// a) описать прототипы всех функций;
// b) сделать проверку определена ли константа, указы­вающая на тип данных(#ifdef INTEGER);
// c) создать обобщающие имена функции, которым бу­дет определена функция соответствующего типа в
// зависимости от константы, указанной в файле prog.cpp(# define show ShowInt).
//    4. В файле prog.cpp нужно:
// a) в функции main вызвать все функции через пере­означеные(обобщенные) имена из файла function.h (show());
// b) определить константу, которая указывает какой тип данных будет использоваться.Например INTEGER —
// целые данные, CHAR— символьные DOUBLE—настоящие(#define INTEGER).


//Препроцессоры для разных видов переменных
// закоментировать ненужное, оставив нужное

//#define INTEGER
#define DOUBLE 
//#define CHAR

#include <iostream>
#include "function.h" // заголовочный файл
#include <string>
#include <cstdlib>      // для system 
#include <stdlib.h>//для рандомайзера


using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    const int arrSize = 10;

    // Инициализация для разных видов переменных
    // закоментировать ненужное, оставив нужное

    //int array[arrSize];
    double array[arrSize];
    //char array[arrSize];


    writeArray(array, arrSize);//функция для заполнения массива случайными зна­че ниями

    showArray(array, arrSize);//функция для вывода в консоль массива с случайными зна­чениями

    minArrayElement(array, arrSize);// функция для поиска минимального элемента

    maxArrayElement(array, arrSize);// функция для поиска максимального элемента

    sortArrayElementMax(array, arrSize);// функция для сортировки от максимального элемента

    sortArrayElementMin(array, arrSize);// функция для сортировки от минимального элемента

    reductArray(array, arrSize);// функция для редактирования значения массива.

    system("pause");

    return 0;
    
}

// 3exercise.cpp
// вывести три числа: числовую константу и два результата заданных операций

#include <iostream>
using namespace std;

int main()
{
	int number = 10;

	cout << 10 << endl; // вывод числовой константы
	number += 10;
	cout << number << endl;	  // вывод переменной после арифметического сложения с присваиванием
	cout << --number << endl; // вывод переменной после операции декремента

	return 0;
}
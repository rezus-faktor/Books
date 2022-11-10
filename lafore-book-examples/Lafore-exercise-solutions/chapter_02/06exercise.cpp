// 6exercise.cpp
// получить от пользователя число (сумму в американских долларах),
// вывести суммы, эквивалентные введенной пользователем, в других валютах,
// курс которых известен

#include <iostream>
#include <iomanip> // для манипуляторов fixed и setprecision
using namespace std;

int main()
{
	float sum = 0.0F, exRate = 1.0F; // денежная сумма и курс валюты

	cout << "Введите сумму в американских долларах: ";
	// при вводе суммы дробную часть необходимо отделять точкой
	// если отделить запятой, в sum попадет только целая часть
	cin >> sum;
	// выводимые значения округляются до 2 знаков после запятой с помощью манипуляторов
	cout << "В американских долларах это " << fixed << setprecision(2) << sum / exRate << endl;
	exRate = 1.487F;
	cout << "В фунтах стерлингов это " << fixed << setprecision(2) << sum / exRate << endl;
	exRate = 0.172F;
	cout << "В франках это " << fixed << setprecision(2) << sum / exRate << endl;
	exRate = 0.584F;
	cout << "В немецких марках это " << fixed << setprecision(2) << sum / exRate << endl;
	exRate = 0.00955F;
	cout << "В японских йенах это " << fixed << setprecision(2) << sum / exRate << endl;

	return 0;
}
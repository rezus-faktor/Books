// circarea.cpp
// работа с переменными вещественного типа

#include <iostream>
using namespace std;

int main()
{
	float rad; // переменная вещественного типа
	const float PI = 3.14159F; // вещественная константа
	cout << "Введите радиус окружности: "; // запрос
	cin >> rad; // получение радиуса
	float area = PI * rad * rad; // вычисление площади круга
	cout << "Площадь круга равна " << area << endl; // вывод результата на экран

	return 0;
}
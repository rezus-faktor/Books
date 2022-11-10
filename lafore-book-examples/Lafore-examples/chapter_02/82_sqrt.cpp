// sqrt.cpp
// использование библиотечной функции sqrt()

#include <iostream>
// #include <cmath> // для sqrt() не потребовался
#include <iomanip> // для манипулятора setprecision()
using namespace std;

int main()
{
	double number, answer; // аргументы типа double для функции sqrt()
	cout << "Введите число: ";
	cin >> number; // ввод числа
	answer = sqrt(number); // извлечение корня
	// вывод результата:
	// по умолчанию для вещественных чисел выводится 6 цифр всего (в сумме до запятой и после)
	// то есть, к примеру, квадратный корень из 1000 выведет 31.6228
	cout << "Квадратный корень равен " << answer << endl;
	// увеличиваем общее количество выводимых цифр в вещественном числе до 16
	// то есть, к примеру, квадратный корень из 1000 выведет 31.62277660168379
	cout << "Квадратный корень равен " << setprecision(16) << answer << endl;

	return 0;
}
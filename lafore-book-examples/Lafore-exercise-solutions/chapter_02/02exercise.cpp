// 2exercise.cpp
// вывести заданную таблицу с выровненными столбцами

#include <iostream>
#include <iomanip> // для манипулятора setw
using namespace std;

int main()
{
	cout << setw(4) << 1990 << setw(6) << 135 << endl
	         << setw(4) << 1991 << setw(6) << 7290 << endl
	         << setw(4) << 1992 << setw(6) << 11300 << endl
	         << setw(4) << 1993 << setw(6) << 16200 << endl;

	return 0;
}
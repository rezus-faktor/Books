// 11exercise.cpp
// вывести на экран заданную таблицу с выравниванием колонок по левому краю
// с помощью манипуляторов setiosflags(ios::left) и setw

#include <iostream>
#include <iomanip> // для манипуляторов setiosflags и setw
using namespace std;

int main()
{
	cout << setiosflags(ios::left)
	       << setw(20) << "Фамилия" << setw(15) << "Имя" << setw(21) << "Адрес" << setw(20) << "Город" << endl
	       << "-----------------------------------------------------------------" << endl
	       << setw(19) << "Петров" << setw(19) << "Василий" << setw(24) << "Соборная 1" << setw(20) << "Николаев" << endl
	       << setw(19) << "Иванов" << setw(18) << "Сергей" << setw(23) << "Мазепы 2" << setw(20) << "Киев" << endl
	       << setw(20) << "Сидоров" << setw(16) << "Иван" << setw(24) << "Молочная 3" << setw(20) << "Харьков" << endl;

	return 0;
}
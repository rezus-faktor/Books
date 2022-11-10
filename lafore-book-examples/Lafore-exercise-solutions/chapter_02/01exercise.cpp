// 1exercise.cpp
// программа, переводящая галлоны в кубические футы

#include <iostream>
using namespace std;

int main()
{
	float gallons, ft3;

	cout << "Введите число галлонов: "; cin >> gallons;
	ft3 = gallons / 7.481F;
	cout << "В кубических футах это будет " << ft3 << endl;

	return 0;
}
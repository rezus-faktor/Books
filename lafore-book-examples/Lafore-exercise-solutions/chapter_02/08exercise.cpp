// 8exercise.cpp
// модифицировать пример с применением манипулятора setw из 2-й главы так,
// чтобы разделяющие символы в столбцах таблицы были не пробелами, а точками
// для этого применить манипулятор setfill

#include <iostream>
#include <iomanip> // для использования setw и setfill
using namespace std;

int main()
{
	long pop1 = 2868702, pop2 = 494922, pop3 = 14566;
	cout << setfill('.') << setw(10) << "Город" << setw(25) << "Население" << endl
	     << setw(5) << "Киев" << setw(17) << pop1 << endl
	         << setw(5) << "Николаев" << setw(13) << pop2 << endl
	         << setw(5) << "Очаков" << setw(15) << pop3 << endl;

	return 0;
}
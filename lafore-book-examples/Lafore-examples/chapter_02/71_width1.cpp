// width1.cpp
// демонстрирует необходимость применения манипулятора setw

#include <iostream>
using namespace std;

int main()
{
	long pop1 = 2868702, pop2 = 494922, pop3 = 14566;
	cout << "Город " << "Нас." << endl
	        << "Киев " << pop1 << endl
	        << "Николаев " << pop2 << endl
	        << "Очаков " << pop3 << endl;

	return 0;
}
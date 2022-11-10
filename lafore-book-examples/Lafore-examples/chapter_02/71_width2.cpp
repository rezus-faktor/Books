// width2.cpp
// применение манипулятора setw

#include <iostream>
#include <iomanip> // для использования setw
using namespace std;

int main()
{
	long pop1 = 2868702, pop2 = 494922, pop3 = 14566;
	cout << setw(10) << "Город" << setw(25) << "Население" << endl
	     << setw(5) << "Киев" << setw(17) << pop1 << endl
	         << setw(5) << "Николаев" << setw(13) << pop2 << endl
	         << setw(5) << "Очаков" << setw(15) << pop3 << endl;

	return 0;
}
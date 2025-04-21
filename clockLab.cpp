
#include <iostream>
#include "clock.h"
using namespace std;
int main()
{
	int month, day, year, hour, min, sec;
	cout << "Please enter the month, day, year : ";
	cin >> month >> day >> year;
	cout << endl << "Please enter the hour, minute, and second : ";
	cin >> hour>> min>> sec;
	dateTimeType basam;
	basam.setDateTime(month, day, year, hour, min, sec);

	return 0;
}

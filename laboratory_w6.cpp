#include <iostream>
#include <windows.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
double Volume(double, double);
struct Time
{
	Time(int minutes = 0, int hours = 0)
	{
		this->minutes = minutes;
		this->hours = hours;
	}
	int minutes;
	int hours;

	void Check_format()
	{
		if (minutes < 60)
			return;
		hours += minutes / 60;
		minutes %= 60;
	}
	void Print()
	{
		Check_format();
		wcout << hours << " h " << minutes << " min" << endl;
	}
};
int main()
{
	
	int choice;
	bool flag = true;
	while (flag)
	{
		cout << "Enter choice: 1 - Volume, 2 - Time, 3 - Function, 0 - Exit: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			double radius, height;
			cout << "Input radius: "; cin >> radius;
			cout << "Input height: "; cin >> height;
			cout << "Volume equals: " << Volume(radius, height) << endl;
			break;
		}
		case 2:
		{
			int minute, hour;
			cout << "Input minute: "; cin >> minute;
			cout << "Input hour: "; cin >> hour;
			Time time(minute, hour);
			time.Print();
			break;
		}
		case 3:
		{
			double x;
			cout << "Input X: "; cin >> x;
			double result = exp(x * 4.0 / 5) + 2 * sin(7 * log(x + 5.0 / 3));
			cout << result << endl;
			break;
		}
		case 0:
			flag = false;
			break;
		default:
			cout << "Wrong choice!For exit enter - 0" << endl;
		}
	}

}


double Volume(double radius, double height)
{
	return 1. / 3 * M_PI * pow(radius, 2) * height;
}

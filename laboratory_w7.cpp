#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //First
    /*int day, month, year;
    cout << "Enter todays data(day/month/year): "; cin >> day >> month >> year;
    if (day > 0 && day < 28)
        day++;
    if (day == 28)
    {
        if (month == 2)
        {
            if ((year % 400 == 0) || (year % 100 != 0 || year % 4 == 0))
                day = 29;
            else {
                day = 1;
                month = 3;
            }
        }
        else
            day++;
    }
    if (day == 29)
    {
        if (month == 2)
        {
            day = 1;
            month++;
        }
        else
            day++;
    }
    if (day == 30)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            day++;
        else
        {
            day == 1;
            month++;
        }
    }
    if (day == 31)
    {
        day = 1;
        if (month == 12)
        {
            year++;
            month = 1;
        }
        else
            month++;
    }
    cout << "Date: " << day << ":" << month << ":" << year << endl;*/

    //Second
    /*int day, month, year, c, y, m, d;
    cout << "Input day, month, year: "; cin >> day >> month >> year;
    if (month == 1 || month == 2)
        year--;
    m = month - 2;
    if (m <= 0)
        m += 12;
    c = year / 100;
    y = year - c * 100;
    d = (day + (13 * m - 1) / 5 + y + y / 4 + c / 4 - 2 * c + 777) % 7;
    switch (d)
    {
    case 0:
        cout << "Sunday" << endl;
        break;
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    }*/


    //Third
    int x, y, z;
    cout << "Enter x, y, z: "; cin >> x >> y >> z;
    cout << "Answer: " << pow(min(x, max(x + y, z)), 2) / (pow(x, 2) + pow(z, 2)) << endl;
}
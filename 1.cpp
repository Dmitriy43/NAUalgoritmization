#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string surname;
    string position;
    string education;
    int birth_year;
    double salary;
};

int main() {
    Employee employees[5];
    
    employees[0] = { "Ivanov", "Manager", "Higher", 1983, 50000 };
    employees[1] = { "Petrov", "Engineer", "Secondary", 1990, 40000 };
    employees[2] = { "Sidorov", "Programmer", "Higher", 1987, 60000 };
    employees[3] = { "Smirnov", "Accountant", "Higher", 1980, 55000 };
    employees[4] = { "Kuznetsov", "Director", "Higher", 1978, 80000 };

    int current_year = 2023;

    cout << "Employees whose age is a multiple of 5 or 10:" << endl;
    for (int i = 0; i < 5; i++) {
        int age = current_year - employees[i].birth_year;
        if (age % 5 == 0) {
            cout << employees[i].surname << " (" << age << " years old)" << endl;
        }
    }

    return 0;
}

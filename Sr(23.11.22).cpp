#include <iostream>
#include <vector>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    int choice;
    bool flag = true;
    while (flag)
    {
        cout << "Enter choice: 1 - First, 2 - Second, 0 - Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            const int SIZE = 7;
            const int MAX_VAL = 3;

            vector<double> vec(SIZE);
            cout << "Fulfill vector: " << endl;
            for (int i = 0; i < SIZE; i++)
            {
                cout << i + 1 << ") ";
                cin >> vec[i];
            }

            double sum = 0;

            for (auto el : vec)
                if (abs(el) <= MAX_VAL)
                    sum += pow(el, 2);

            cout << "Sum: " << sum << endl;
            break;
        }
        case 2:
        {
            vector<double> vec;
            cout << "Fulfill vector: " << endl;
            double sum = 0;
            string str, buf = "";
            cin.ignore();
            getline(cin, str);

            int counter = 0;

            for(int i = 0; str[i] != '\0'; i++)
            {
                buf += str[i];
                
                if (str[i] == ' ' || str[i + 1] == '\0')
                {
                    counter++;
                    vec.push_back(stod(buf));
                    buf.clear();
                }
            }

            vec.resize(counter);
            double result = 1;

            for (int i = 0; i < vec.size() - 1; i++)
                result *= (vec[i + 1] - vec[i]);

            cout << "Result: " << result << endl;
            break;
        }
        case 0:
            flag = false;
            break;
        default:
            cout << "Wrong choice" << endl;
        }
    }
}
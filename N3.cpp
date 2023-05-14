#include <iostream>
using namespace std;
class AB
{
private:
    int a;
    int b;
public:
    AB()
    {
        a = 0; b = 0;
        cout << "\nWork of Constructor when new obj created: \n";
        cout << "\ta = " << a << endl;
        cout << "\tb = " << b << endl << endl;
    }
    void getAB()
    {
        cout << "\n\ta = " << a << endl;
        cout << "\tb = " << b << endl << endl;
    }
    void setAB()
    {
        cout << "Input integer number a: "; cin >> a;
        cout << "Input integer number b: "; cin >> b;
    }
    ~AB()
    {
        cout << "Destructor for: " << this << endl;
    }
};

int main()
{
    AB obj1;
    obj1.setAB();
    obj1.getAB();
    AB obj2;
    return 0;
}
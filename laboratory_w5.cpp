#include <iostream>
#include<math.h>
using namespace std;

int main() {
	double F, x, y, z;
	cout << "Enter x,y,z" << endl;
	cin >> x >> y >> z;

	F = max(max(pow(x, 3), pow(y, 2)), x * y) + x / pow(min(x, y * z), z) - y;
	cout << "F= " << F << endl;
	return 0;
}
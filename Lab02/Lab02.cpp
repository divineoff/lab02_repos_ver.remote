#include <iostream>

using namespace std;

int main()
{
	double alpha, z1, z2;
	cout << "alpha = "; cin >> alpha;
	z1 = (sin(alpha) + sin(5 * alpha) - sin(3 * alpha)) / (cos(alpha) - cos(3 * alpha) + cos(5 * alpha));
	z2 = tan(3 * alpha);
	cout << endl;
	cout << "Commit 3 version!!!" << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	return 0;
}
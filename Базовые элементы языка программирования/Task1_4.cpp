#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "Enter x and y values" << endl;
	double x, y;
	cin >> x >> y;
	double k = exp(x * x + y * y) + 5 * x;
	double p = pow(cos(x + y), 2);
	double res = sqrt(k / p) / 3 + x / y;
	cout << res << endl;
	system("pause");
	return 0;
}
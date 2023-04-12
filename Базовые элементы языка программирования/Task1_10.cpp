#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "Enter x and y values" << endl;
	double x, y;
	cin >> x >> y;
	double k = exp(sqrt(y + x));
	double p = pow(sin(sqrt(x * x - y * y)), 2);
	double res = sqrt(cos(k / p));
	cout << res << endl;
	system("pause");
	return 0;
}
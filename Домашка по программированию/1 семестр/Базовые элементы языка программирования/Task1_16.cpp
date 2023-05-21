#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "Enter x values" << endl;
	int x;
	cin >> x;
	int numb_1, numb_2, numb_3;
	numb_3 = abs(x) % 10;
	numb_2 = (abs(x) % 100) / 10;
	numb_1 = abs(x) / 100;
	int res = 100 * ((numb_2 + numb_3) % 10)
		+ 10 * (abs(numb_1 - numb_3))
		+ numb_2 % numb_1;
	cout << res << endl;
	system("pause");
	return 0;
}
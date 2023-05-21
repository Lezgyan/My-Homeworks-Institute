#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "Enter x values" << endl;
	int x;
	cin >> x;
	int numb_1, numb_2, numb_3;
	numb_1 = abs(x) % 10;
	numb_2 = (abs(x) % 100) / 10;
	numb_3 = abs(x) / 100;
	int sum, res;
	if (numb_1 != 0 && numb_2 != 0 && numb_3 != 0) {
		sum = numb_1 + numb_2 + numb_3;
		// 100*a + 10*b + 1*c, where a,b,c - integers
		res = 100 * (sum % numb_3) + 10 * (sum % numb_2) + (sum % numb_1); 
		cout << res << endl;
	}
	else {
		cout << "invalid number" << endl;
	}
	system("pause");
	return 0;
}
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	double y1 = 0.9, y2 = 1.1;
	cout << y1 << endl << y2 << endl;
	for (int i = 3; i <= n; i++) {
		double yi = y2 / i + (y1) / (i*i);
		cout << yi << endl;
		y1 = y2;
		y2 = yi;
	}
	system("pause");
	return 0;
}
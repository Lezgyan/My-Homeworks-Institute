#include <iostream>
using namespace std;

void print(char p, int n) {
	for (int i = 0; i < n; i++) {
		cout << p;
	}
}

void f(int n, int k, char p) {
	if (k >= 0) {
		print(p, n);
		print('-', k);
		print(p, n);
		cout << endl;
		f(n + 1, k - 2, p + 1);
		print(p, n);
		print('-', k);
		print(p, n);
		cout << endl;
	}
}
int main() {
	setlocale(LC_ALL, "Rus");
	int n;
	cin >> n;
	if (n <= 9) {
		f(1, 2 * n - 2, '1');
	}
	else {
		cout << "Неверное значение n" << endl;
	}
	system("pause");
	return 0;
}
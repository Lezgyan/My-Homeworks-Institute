#include <iostream>
using namespace std;
int main() {
	double x;
	cout << "x = ";
	cin >> x;
	double a = 1, S = 1;
	int N = 1000;
	double eps = 0.01;
	double h = cos(x);
	bool flag = false;
	for (int i = 1; i <= N && abs(a) > eps; i+=2) { // знаменатель факториал
		a = a * ((-x * x) / (i*(i + 1))); // каждый следующий больше в ((-x * x) / (i*(i + 1)) раз
		S += a;
		
	}
	if (abs(a)<= eps) { // если флаг поднят то вывести сумму
		cout << S<<endl<<cos(x);
	}
	else {
		cout << "Series diverges"; // ряд расходится
	}
	system("pause");
	return 0;
}
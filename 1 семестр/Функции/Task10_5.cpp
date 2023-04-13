//#include <iostream>
//using namespace std;
//
//double func(double b, double q, int n) {
//	if (n == 1) {
//		return b;
//	}
//	return func(b, q, n - 1) * q;
//}
//int main() {
//	int b, q, n;
//	cin >> b >> q >> n;
//	cout << func(b, q, n);
//	system("pause");
//	return 0;
//}



// нерекурсивный
//#include <iostream>
//using namespace std;
//int main() {
//	double b, q;
//	int n;
//	cin >> b >> q >> n;
//	double res = 1;
//	for (int i = 0; i < n - 1; i++) {
//		res = res * q;
//	}
//	cout << res * b;
//	system("pause");
//	return 0;
//}
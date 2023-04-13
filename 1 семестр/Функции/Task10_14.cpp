//#include <iostream>
//
//using namespace std;
//
//int func(int m, int n) {
//	if (m == 0) {
//		return n + 1;
//	}
//	else if ((m > 0) && (n == 0)) {
//		return func(m - 1, 1);
//	}
//	else if ((m > 0) && (n > 0)) {
//		return func(m - 1, func(m, n - 1));
//	}
//}
//int main() {
//	int m, n;
//	cin >> m >> n;
//	cout << func(m, n);
//	system("pause");
//	return 0;
//}
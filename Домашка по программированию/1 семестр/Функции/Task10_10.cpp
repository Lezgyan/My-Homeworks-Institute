//#include<iostream>
//using namespace std;
//
//int func(int x, int n) {
//	if (n == 0) {
//		return 1;
//	}
//	if (n == 1) {
//		return 2 * x - 1;
//	}
//	return 2 * (2 * x - 1) * func(x, n - 1) - func(x, n - 2);
//}
//int main() {
//	int x, n;
//	cin >> x >> n;
//	cout << func(x, n);
//	system("pause");
//	return 0;
//}



// нерекурсивный
//#include <iostream>
//using namespace std;
//int main() {
//	int x;
//	cin >> x;
//	int n;
//	cin >> n;
//	long long res = 0;
//	int t_0 = 1, t_1 = 2 * x - 1;
//	if (n == 0) {
//		cout << t_0;
//	}
//	else if (n == 1) {
//		cout << t_1;
//	}
//	else {
//		for (int i = 2; i <= n; i++) {
//			res = 2 * (2 * x - 1)*t_1 - t_0;
//			t_0 = t_1;
//			t_1 = res;
//		}
//	}
//	cout << res;
//	system("pause");
//	return 0;
//}



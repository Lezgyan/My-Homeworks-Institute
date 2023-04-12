//#include <iostream>
//using namespace std;
//int main() {
//	int N = 1000;
//	double x, eps = 0.001;
//	cout << "x = ";
//	cin >> x;
//	double a = 1, S = 1;
//	double w = 1 / (1 + x);
//	bool flag = false;
//	for (int i = 1; i <= N && abs(a) > eps; i++) {
//		a = a * (-x);
//		S += a;
//		if (abs(w - S) < eps) {
//			flag = true;
//			break;
//		}
//	}
//	if (flag) {
//		cout << S << endl;
//	}
//	else {
//		cout << "Series diverges" << endl;
//	}
//	system("pause");
//	return 0;
//}
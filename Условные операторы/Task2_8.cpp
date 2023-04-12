//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	double x;
//	cin >> x;
//	double k = 4 - x; // разделил выражение на 3 части
//	double p = x * x * x - 64;
//	double f = x * x - 9;
//	const double exp = 0.000001;
//	if (k < 0) { // проверка одз
//		cout << "the root of a negative number" << endl;
//	}
//	else if (abs(p) < exp) { // проверка одз
//		cout << "division by zero" << endl;
//	}
//	else if (f < 0 || abs(f) < exp) { // проверка одз
//		cout << "logarithm of a non-positive number" << endl;
//	}
//	else { // подсчёт ответов, если функция определена 
//		double answer = sqrt(k) / p + log(f);
//		cout << answer << endl;
//	}
//	system("pause");
//	return 0;
//}
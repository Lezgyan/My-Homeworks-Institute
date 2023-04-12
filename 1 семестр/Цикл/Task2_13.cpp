//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	double a, b, h;
//	cin >> a >> b >> h;
//	for (double i = a; i <= b; i += h) { // перебор значений x от а до b с шагом h
//		double x = i;
//		double con_1 = x * x - 1; // значение числителя
//		double con_2 = x * x - 4 * x + 4; // значение знаменателя
//		if (con_1 <= 0) { // проверка одз
//			cout << "i = " << i << " - " << "Logarithm of a non - positive number" << endl; // логарифм из неположительного числа
//		}
//		else if (con_2 == 0) { // проверка одз
//			cout << "i = " << i << " - " << "Division by zero" << endl; // деление на 0
//		}
//		else if (con_2 < 0) { // проверка одз
//			cout << "i = " << i << " - " << "The root of a negative number" << endl; // корень из отрицательного числа
//		}
//		else {
//			double res = log(con_1) / sqrt(con_2); // ответ
//			cout << "i = " << i << " - " << res << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
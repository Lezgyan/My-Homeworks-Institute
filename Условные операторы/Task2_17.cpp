#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	cout << "Введите значения сторон" << endl;
	double a, b, c;
	cin >> a >> b >> c;
	const double eps = 0.0001;
	if (a + b > c && a + c > b && b + c > a) {
		double R, r, S;
		double p = (a + b + c) / 2;
		S = sqrt(p*(p - a)*(p - b)*(p - c)); // формула Герона
		R = (a * b * c) / (4 * S);
		r = sqrt(((p - a) * (p - b) * (p - c)) / p);
		double k = max(a, max(b, c)); // гипотенуза
		double w = min(a, min(b, c)); // 1 катет
		double v = a + b + c - w - k; // 2 катет
		if (a == b && b == c) {
			double h = (a * sqrt(3)) / 2; // высота
			cout << "Равносторонний треугольник" << "\n" 
				<< "h = " << h;
		}
		else if ((abs(a - b) < eps || abs(a - c) < eps || abs(b - c) < eps)
			&& (abs(k * k - w * w - v * v) < eps)) {
			double w = (a + b + c - k) / 2; // катеты
			double h = (w * v) / k; // высота
			double m = k / 2; // медиана
			cout << "Равнобедренный прямоугольный треугольник" << "\n"
				<< w << "," << w << " - катеты" << "\n"
				<< k << " - гипотенуза" << "\n"
				<< "h = " << h << "\n"
				<< "m = " << m;
		}
		else if (abs(k * k - w * w - v * v) < eps) {
			double h = (w * v) / k; // высота
			double m = k / 2; // медиана
			cout << "Прямоугольный треугольник" << "\n" 
				<< w << "," << v << " - катеты" << "\n"
				<< k << " - гипотенуза" << "\n"
				<< "h = " << h << "\n"
				<< "m = " << m;
		}
		else if (!(abs(a - b) < eps && abs(b - c) < eps) 
			&& (abs(a - b) < eps || abs(a - c) < eps || abs(b - c) < eps)) {
			cout << "Равнобедренный треугольник" << endl;
			if (abs(a - b) < eps) {
				double h = sqrt(a * a - (c * c) / 4);
				cout << a << ", " << b << " - боковые стороны" << "\n"
					 << c << " - основание" << "\n"
					 << "h = " << h;
			}
			if (abs(a - c) < eps) {
				double h = sqrt(a * a - (b * b) / 4);
				cout << a << ", " << c << " - боковые стороны" << "\n"
					<< b << " - основание" << "\n"
					<< "h = " << h;
			}
			if (abs(c - b) < eps) {
				double h = sqrt(c * c - (a * a) / 4);
				cout << b << ", " << c << " - боковые стороны" << "\n"
					<< a << " - основание" << "\n"
					<< "h = " << h;
			}
		}
		else {
			cout << "Разносторонний треугольник";
		}
		cout << "\n" << "R = " << R 
			<< "\n" << "r = " << r 
			<< "\n" << "S = " << S << endl;
	}
	else {
		cout << "Данного треугольника не существует" << endl;
	}
	system("pause");
	return 0;
}
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <numeric>
//using namespace std;
//
//struct frac {
//	int numerator;
//	int denominator;
//	int whole = 0;
//};
//
//frac ret(frac a) { // целую часть в дробную
//	frac b;
//	b.numerator = a.whole*a.denominator + a.numerator;
//	b.denominator = a.denominator;
//	return b;
//}
//
//istream& operator>> (istream& in, frac& a) { // ввод
//	string s;
//	in >> s;
//	int r = s.find('/');
//	a.numerator = stoi(s.substr(0, r));
//	a.denominator = stoi(s.substr(r + 1));
//	a.whole = 0;
//	return in;
//}
//
//ostream& operator<< (ostream& out, frac a) { // вывод
//	if (a.whole != 0) {
//		out << a.whole << " ";
//	}
//	out << a.numerator << "/" << a.denominator;
//	return out;
//}
//
//frac operator+ (frac x , frac y) { // сложение
//	frac a = ret(x);
//	frac b = ret(y);
//	frac c;
//	c.numerator = a.numerator * b.denominator + b.numerator*a.denominator;
//	c.denominator = a.denominator*b.denominator;
//	return c;
//}
//
//frac operator- (frac x, frac y) {// вычитание
//	frac a = ret(x);
//	frac b = ret(y);
//	frac c;
//	c.numerator = a.numerator * b.denominator - b.numerator*a.denominator;
//	c.denominator = a.denominator*b.denominator;
//	return c;
//}
//
//frac operator* (frac x, frac y) {// умножение
//	frac a = ret(x);
//	frac b = ret(y);
//	frac c;
//	c.numerator = a.numerator * b.numerator;
//	c.denominator = a.denominator*b.denominator;
//	return c;
//}
//
//frac operator/ (frac x, frac y) { // деление
//	frac a = ret(x);
//	frac b = ret(y);
//	frac c;
//	c.numerator = a.numerator * b.denominator;
//	c.denominator = a.denominator*b.numerator;
//	return c;
//}
//
//frac sk(frac a) { // сокращение
//	frac c;
//	int s = gcd(a.numerator, a.denominator);
//	c.numerator = a.numerator / s;
//	c.denominator = a.denominator / s;
//	return c;
//}
//
//double decimal_fraction(frac x) { // десятичная дробь
//	frac a = ret(x);
//	double s = (a.numerator * 1.0) / a.denominator;
//	return s;
//}
//
//frac sd(frac x) { // выделение целой части
//	frac a;
//	if (x.numerator >= x.denominator) {
//		a.whole = x.numerator / x.denominator;
//		a.numerator = x.numerator - (a.whole * x.denominator);
//		a.denominator = x.denominator;
//		return a;
//	}
//	return x;
//}
//
//int main() {
//	frac x, y;
//	cin >> x >> y;
//	cout << decimal_fraction(x - y);
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	double a, b, h;
//	cin >> a >> b >> h;
//	for (double i = a; i <= b; i += h) { // ������� �������� x �� � �� b � ����� h
//		double x = i;
//		double con_1 = x * x - 1; // �������� ���������
//		double con_2 = x * x - 4 * x + 4; // �������� �����������
//		if (con_1 <= 0) { // �������� ���
//			cout << "i = " << i << " - " << "Logarithm of a non - positive number" << endl; // �������� �� ���������������� �����
//		}
//		else if (con_2 == 0) { // �������� ���
//			cout << "i = " << i << " - " << "Division by zero" << endl; // ������� �� 0
//		}
//		else if (con_2 < 0) { // �������� ���
//			cout << "i = " << i << " - " << "The root of a negative number" << endl; // ������ �� �������������� �����
//		}
//		else {
//			double res = log(con_1) / sqrt(con_2); // �����
//			cout << "i = " << i << " - " << res << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
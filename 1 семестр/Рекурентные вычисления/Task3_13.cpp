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
	for (int i = 1; i <= N && abs(a) > eps; i+=2) { // ����������� ���������
		a = a * ((-x * x) / (i*(i + 1))); // ������ ��������� ������ � ((-x * x) / (i*(i + 1)) ���
		S += a;
		
	}
	if (abs(a)<= eps) { // ���� ���� ������ �� ������� �����
		cout << S<<endl<<cos(x);
	}
	else {
		cout << "Series diverges"; // ��� ����������
	}
	system("pause");
	return 0;
}
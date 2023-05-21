//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "rus");
//	int n;
//	cout << "n = ";
//	cin >> n;
//	int X;
//	cout << "X = ";
//	cin >> X;
//	int *mas = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> mas[i];
//	}
//	int p = 0;
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		if ((mas[i] % 2 != 0) && (mas[i] < X)) {
//			p++;
//			sum += mas[i];
//		}
//	}
//	if (p == 0) {
//		cout << "Таких элементов нет";
//	}
//	else {
//		cout << sum;
//	}
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "rus");
//	int n, a, b;
//	cout << "n = ";
//	cin >> n;
//	cout << "a = ";
//	cin >> a;
//	cout << "b = ";
//	cin >> b;
//	if (a > b) {
//		swap(a, b);
//	}
//	int *mas = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> mas[i];
//	}
//	int k = 0;
//	for (int i = 0; i < n; i++) {
//		if ((mas[i] % 3 == 0) && ((mas[i] < a) || (mas[i] > b))) {
//			cout << i << " ";
//			k++;
//		}
//	}
//	if (k == 0) {
//		cout << "Таких элементов нет";
//	}
//	system("pause");
//	return 0;
//}
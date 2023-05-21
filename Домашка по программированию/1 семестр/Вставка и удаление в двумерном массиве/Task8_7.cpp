//#include <iostream>
//
//using namespace std;
//
//int** create(int n) {
//	int** mas = new int*[n];
//	for (int i = 0; i < n; i++) {
//		mas[i] = new int[2*n];
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> mas[i][j];
//		}
//	}
//	return mas;
//}
//
//void change(int** mas, int n, int m) {
//	for (int i = 0; i < m; i++) { // столбец
//		int cnt = 0;
//		for (int j = 0; j < n; j++) { // строка
//			if (mas[j][i] % 2 == 0) {
//				cnt++;
//			}
//		}
//		if (cnt == n) {
//			for (int k = m; k > i; k--) {
//				for (int p = 0; p < n; p++) {
//					mas[p][k] = mas[p][k - 1];
//				}
//			}
//			for (int s = 0; s < n; s++) {
//				mas[s][i + 1] = mas[s][i];
//			}
//			m++;
//			i++;
//		}
//	}
//}
//
//void print(int** mas, int n, int m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	setlocale(LC_ALL, "Rus");
//	int n;
//	cout << "Введите n = ";
//	cin >> n;
//	int m = n;
//	int tp = 0;
//	int** mas = create(n);
//	for (int i = 0; i < m; i++) {
//		int wer = 0;
//		for (int j = 0; j < n; j++) {
//			if (mas[j][i] % 2 == 0) {
//				wer++;
//			}
//		}
//		if (wer == n) {
//			tp++;
//		}
//	}
//	change(mas, n, m);
//	cout << endl;
//	print(mas, n, m + tp);
//	system("pause");
//	return 0;
//}
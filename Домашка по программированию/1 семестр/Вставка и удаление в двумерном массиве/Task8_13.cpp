//#include <iostream>
//
//using namespace std;
//
//int** create(int n) {
//	int** mas = new int*[n];
//	for (int i = 0; i < n; i++) {
//		mas[i] = new int[n];
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> mas[i][j];
//		}
//	}
//	return mas;
//}
//
//void change(int** mas, int n, int m, int X) {
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = 0; j < m; j++) {
//			if (mas[i][j] == X) {
//				for (int k = i + 1; k < n; k++) {
//					for (int p = 0; p < m; p++) {
//						mas[k - 1][p] = mas[k][p];
//					}
//				}
//				delete[] mas[n - 1];
//				n--;
//				i--;
//				break;
//			}
//		}
//	}
//}
//void print(int** mas, int n, int m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//int main() {
//	setlocale(LC_ALL, "Rus");
//	int n, X;
//	cout << "¬ведите n = ";
//	cin >> n;
//	cout << "¬ведите X = ";
//	cin >> X;
//	int m = n;
//	int** mas = create(n);
//	int cnt = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (mas[i][j] == X) {
//				cnt++;
//				break;
//			}
//		}
//	}
//	change(mas, n, m, X);
//	cout << endl;
//	print(mas, n - cnt, m);
//	system("pause");
//	return 0;
//}

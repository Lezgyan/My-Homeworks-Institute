//#include <iostream>
//#include <limits.h>
//
//using namespace std;
//
//int **create(int n, int m) { // создание двумероного массива
//	int **mas = new int *[n];
//	for (int i = 0; i < n; i++) {
//		mas[i] = new int[m];
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> mas[i][j];
//		}
//	}
//	return mas;
//}
//
//void print(int **mas, int n, int m) { // вывод двумерного массива
//	for (int i = 0; i < n; i++, cout << endl) {
//		for (int j = 0; j < m; j++) {
//			cout << mas[i][j] << " ";
//		}
//	}
//}
//
//int find_min(int **mas, int n, int m) { // поиск минимального элемента
//	int minn = INT_MAX, kmin = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (mas[i][j] < minn) {
//				minn = mas[i][j];
//				kmin = i;
//			}
//		}
//	}
//	return kmin;
//}
//
//int find_max(int **mas, int n, int m) { // поиск максимального элемента
//	int maxn = INT_MIN, kmax = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (mas[i][j] > maxn) {
//				maxn = mas[i][j];
//				kmax = i;
//			}
//		}
//	}
//	return kmax;
//}
//void change(int **mas, int n, int m) {
//	int kmin = find_min(mas, n, m);
//	int kmax = find_max(mas, n, m);
//	for (int j = 0; j < m; j++) { // поменять местами
//		swap(mas[kmin][j], mas[kmax][j]);
//	}
//}
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	int **mas = create(n, m);
//	change(mas, n, m);
//	cout << endl;
//	print(mas, n, m);
//	system("pause");
//	return 0;
//}
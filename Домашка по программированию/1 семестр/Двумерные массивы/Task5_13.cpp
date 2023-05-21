//#include <iostream>
//#include <limits.h>
//
//using namespace std; 
//
//int **create(int n) { // создание двумерного массива
//	int **mas = new int *[n];
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
//void print(int **mas, int n) { // вывод двумерного массива
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//void change(int **mas, int n) { // суть задачи
//	int minn = INT_MAX;
//	int maxn = INT_MIN;
//	int ni, nj, mi, mj;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= i; j++) {
//			if (mas[i][j] < minn && (mas[i][j] % 2 == 0)) { // поиск минимального чётного
//				ni = i;
//				nj = j;
//				minn = mas[i][j];
//			}
//		}
//		for (int j = n - 1; j > i; j--) {
//			if (mas[i][j] > maxn && (mas[i][j] % 2 != 0)) { // поиск максимальног нечётного
//				mi = i;
//				mj = j;
//				maxn = mas[i][j];
//			}
//		}
//	}
//	swap(mas[ni][nj], mas[mi][mj]);
//}
//int main() {
//	int n;
//	cin >> n;
//	int **mas = create(n);
//	change(mas, n);
//	cout << endl;
//	print(mas, n);
//	system("pause");
//	return 0;
//}
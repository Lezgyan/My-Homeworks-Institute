//#include <iostream>
//
//using namespace std;
//
//int **create(int n, int m) { // создание двумерного массива
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
//void change(int **mas, int n, int m) { // суть задачи
//	for (int i = 0; i < (n / 2); i++) {
//		for (int j = 0; j < m; j++) { ///////////////
//			swap(mas[i][j], mas[n - 1 - i][j]);
//		}
//	}
//}
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
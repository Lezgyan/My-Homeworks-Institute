//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int k;
//	cout << "Enter value k = ";
//	cin >> k;
//	cout << endl;
//	int **mas = new int*[k + 1]; // создание двумерного массива
//	for (int i = 0; i < k + 1; i++) {
//		mas[i] = new int[i + 1];
//	}
//	if (k == 0) {
//		mas[0][0] = 1;
//	}
//	else {
//		mas[0][0] = 1;
//		mas[1][0] = mas[1][1] = 1;
//	}
//	for (int i = 2; i < k + 1; i++) { // создание треугольника Паскаля
//		mas[i][0] = 1;
//		for (int j = 1; j < i; j++) {
//			mas[i][j] = mas[i - 1][j - 1] + mas[i - 1][j];
//		}
//		mas[i][i] = 1;
//	}
//
//	for (int i = 0; i < k + 1; i++) { // вывод треугольника Паскаля
//		for (int j = 0; j < i + 1; j++) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	int sum = 0; // поиск суммы k строки треугольника Паскаля
//	for (int i = 0; i < k + 1; i++) {
//		sum += mas[k][i];
//	}
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}
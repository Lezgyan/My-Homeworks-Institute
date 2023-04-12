//#include <iostream>
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
//			mas[i][j] = 0;
//		}
//	}
//	return mas;
//}
//
//void print(int **mas, int n) { // вывод двумеорного массива
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//void change(int **mas, int n) { // суть задачи
//	int r = 0, k = n - 1;
//	int p = 0, t = n;
//	for (int i = 0; i < n; i++) {
//		if (i % 2 == 0) { // заполнение чётных строк
//			while (r < n) {
//				mas[i][r] = k;
//				k--;
//				r++;
//			}
//			k += 2 * n + n;
//			r = 0;
//		}
//		else { // заполнение нечётных строк
//			while (p < n) {
//				mas[i][p] = t;
//				p++;
//				t++;
//			}
//			t += n;
//			p = 0;
//		}
//	}
//}
//
//
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
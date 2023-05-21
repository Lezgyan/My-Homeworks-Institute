////#include <iostream>
////using namespace std;
////
////int** create(int n) {
////	int **mas = new int*[2*n];
////	for (int i = 0; i < 2*n; i++) {
////		mas[i] = new int[n];
////	}
////	for (int i = 0; i < n; i++) {
////		for (int j = 0; j < n; j++) {
////			cin >> mas[i][j];
////		}
////	}
////	return mas;
////}
////
////int* string_arr(int n) {
////	int* arr = new int[n];
////	for (int i = 0; i < n; i++) {
////		cin >> arr[i];
////	}
////	return arr;
////}
////
////void change(int** mas, int n, int Y, int* arr, int m) {
////	for (int i = 0; i < n; i++) {
////		for (int j = 0; j < m; j++) {
////			if (mas[i][j] == Y) {
////				for (int k = n; k > i; k--) {
////					for (int p = 0; p < m; p++) {
////						mas[k][p] = mas[k - 1][p];
////					}
////				}
////				n++;
////				for (int s = 0; s < m; s++) {
////					mas[i][s] = arr[s];
////				}
////				break;
////			}
////		}
////	}
////}
////void print(int** mas, int n, int m) {
////	for (int i = 0; i < n; i++) {
////		for (int j = 0; j < m; j++) {
////			cout << mas[i][j] << " ";
////		}
////		cout << endl;
////	}
////}
////int main() {
////	setlocale(LC_ALL, "Rus");
////	int n;
////	cout << "¬ведите n = ";
////	cin >> n;
////	int Y;
////	cout << "¬ведите Y = ";
////	cin >> Y;
////	int m = n;
////	int** mas = create(n);
////	int* arr = string_arr(n);
////	change(mas, n, Y, arr, m);
////	cout << endl;
////	print(mas, n, m);
////	system("pause");
////	return 0;
////}
//
//
//
//// +- правильный вариант, только нужно
//// посмотреть как по-другому можно обыграть
//// счЄтчик cnt
//
//
//
//#include <iostream>
//using namespace std;
//
//int** create(int n) {
//	int **mas = new int*[2 * n];
//	for (int i = 0; i < 2 * n; i++) {
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
//int* string_arr(int n) {
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	return arr;
//}
//
//void change(int** mas, int n, int m, int* arr, int Y) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (mas[i][j] == Y) {
//				for (int k = n; k > i; k--) {
//					for (int p = 0; p < m; p++) {
//						mas[k][p] = mas[k - 1][p];
//					}
//				}
//				for (int k = 0; k < m; k++) {
//					mas[i + 1][k] = arr[k];
//				}
//				n++;
//				i++;
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
//
//int main() {
//	setlocale(LC_ALL, "Rus");
//	int n;
//	cout << "¬ведите n = ";
//	cin >> n;
//	int Y;
//	cout << "¬ведите Y = ";
//	cin >> Y;
//	int cnt = 0;
//	int m = n;
//	int** mas = create(n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (mas[i][j] == Y) {
//				cnt++;
//				break;
//			}
//		}
//	}
//	int* arr = string_arr(n);
//	change(mas, n, m, arr, Y);
//	cout << endl;
//	print(mas, n + cnt, m);
//	system("pause");
//	return 0;
//}
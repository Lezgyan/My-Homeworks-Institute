//#include <iostream>
//#include <limits.h>
//
//using namespace std; 
//
//int **create(int n) { // �������� ���������� �������
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
//void print(int **mas, int n) { // ����� ���������� �������
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//void change(int **mas, int n) { // ���� ������
//	int minn = INT_MAX;
//	int maxn = INT_MIN;
//	int ni, nj, mi, mj;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= i; j++) {
//			if (mas[i][j] < minn && (mas[i][j] % 2 == 0)) { // ����� ������������ �������
//				ni = i;
//				nj = j;
//				minn = mas[i][j];
//			}
//		}
//		for (int j = n - 1; j > i; j--) {
//			if (mas[i][j] > maxn && (mas[i][j] % 2 != 0)) { // ����� ������������ ���������
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
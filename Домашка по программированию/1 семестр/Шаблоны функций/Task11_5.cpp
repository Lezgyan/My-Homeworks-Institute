//#include <iostream>
//using namespace std;
//
//template <typename X>
//X **create(int n, int m) {
//	X **arr = new X *[n];
//	for (int i = 0; i < n; i++) {
//		arr[i] = new X[m];
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	return arr;
//}
//
//template <typename X>
//void print(X **arr, int n, int m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//template <typename X>
//void change(X **arr, int n, int m) {
//	X max_n = arr[0][0], min_n = arr[0][0];
//	int imin = 0, imax = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (arr[i][j] > max_n) {
//				max_n = arr[i][j];
//				imax = i;
//			}
//			if (arr[i][j] < min_n) {
//				min_n = arr[i][j];
//				imin = i;
//			}
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		swap(arr[imin][i], arr[imax][i]);
//	}
//}
//int main() {
//	int n, m;
//	cin >> n >> m;
//	int k; 
//	cin >> k;
//	switch (k) {
//		case 1: {
//			int **arr = create<int>(n, m);
//			change(arr, n, m);
//			cout << endl;
//			print(arr, n, m);
//			break;
//		}
//		case 2: {
//			double **arr = create<double>(n, m);
//			change(arr, n, m);
//			cout << endl;
//			print(arr, n, m);
//			break;
//		}
//		case 3: {
//			char **arr = create<char>(n, m);
//			change(arr, n, m);
//			cout << endl;
//			print(arr, n, m);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RUS");
//	int n, x, y;
//	cout << "������� n = ";
//	cin >> n;
//	cout << "������� x = ";
//	cin >> x;
//	cout << "������� y = ";
//	cin >> y;
//	int *arr = new int[2*n];
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n; i++) {
//		if (arr[i] == x) {
//			for (int j = n; j > i; j--) {
//				arr[j] = arr[j - 1];
//			}
//			n++;
//			arr[i] = y;
//			i++;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
//	system("pause");
//	return 0;
//}
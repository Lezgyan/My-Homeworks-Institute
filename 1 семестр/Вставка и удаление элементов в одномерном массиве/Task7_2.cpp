//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RUS");
//	int n, x;
//	cout << "¬ведите n = ";
//	cin >> n;
//	cout << "¬ведите x = ";
//	cin >> x;
//	int *arr = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n; i++) {
//		if (arr[i] == x) {
//			for (int j = i; j < n - 1; j++) {
//				arr[j] = arr[j + 1];
//			}
//			n--;
//			i--;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		cout << arr[i];
//	}
//	system("pause");
//	return 0;
//}
//
//

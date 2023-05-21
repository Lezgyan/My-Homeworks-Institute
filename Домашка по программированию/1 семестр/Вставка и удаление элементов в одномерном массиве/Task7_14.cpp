//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RUS");
//	int n, x;
//	cout << "¬ведите n = ";
//	cin >> n;
//	cout << "¬ведите x = ";
//	cin >> x;
//	int *arr = new int[2*n];
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n; i++) {
//		if (arr[i] % 2 != 0) {
//			for (int j = n; j > i; j--) {
//				arr[j] = arr[j - 1];
//			}
//			arr[i] = x;
//			n++;
//			i++;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
//	system("pause");
//	return 0;
//}
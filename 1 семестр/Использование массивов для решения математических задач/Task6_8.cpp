//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	int *arr = new int[n + 1];
//	for (int i = 0; i < n + 1; i++) {
//		cin >> arr[i];
//	}
//	int *mas = new int[n]; // взятие производной
//	for (int i = 0; i < n; i++) {
//		int k = n - i;
//		int r = arr[i] * k;
//		mas[i] = r;
//	
//	}
//	int s = n + n;
//	int *res = new int[s]; 
//	for (int k = 0; k < s; k++) { // перемножение f(x) * f'(x)
//		int sum = 0;
//		for (int i = 0; i < n + 1; i++) {
//			for (int j = 0; j < n; j++) {
//				if (i + j == k) {
//					sum += arr[i] * mas[j];
//				}
//			}
//		}
//		res[k] = sum;
//	}
//	for (int i = 0; i < s; i++) { // вывод
//		cout << res[i] << " "; 
//	}
//	system("pause");
//	return 0;
//}
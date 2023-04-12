//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	int N;
//	cin >> N;
//	int A = 1;
//	cout << "2" << " ";
//	for (int i = 3; A < N; i++) { // перебор чисел
//		bool flag = true;
//		for (int j = 2; j < sqrt(i) + 1; j++) { // перебор делителей
//			if (i % j == 0) { // проверка на делимость
//				flag = false;
//				break;
//			}
//		}
//		if (flag) {
//			cout << i << " ";
//			A++;
//		}
//	}
//	system("pause");
//	return 0;
//}
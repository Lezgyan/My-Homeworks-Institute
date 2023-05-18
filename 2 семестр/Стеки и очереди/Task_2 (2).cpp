//#include <iostream>
//#include <stack>
//#include <unordered_map>
//using namespace std;
//
//int del(int n) { // поиск кол-ва делителей
//	if (n == 1) {
//		return 1;
//	}
//	int ans = 2;
//	for (int i = 2; i < sqrt(n); i++) {
//		if (n % i == 0) {
//			ans += 2;
//		}
//	}
//	double t = sqrt(n);
//	if (t * t == n * 1.0) {
//		ans++;
//	}
//	return ans;
//}
//
//int main() {
//	int n; cin >> n;
//	unordered_map<int, int> mapa;
//	stack<int> st, res;
//	int max_n = INT_MIN;
//	for (int i = 0; i < n; i++) { // считывание
//		int k; cin >> k;
//		int d = del(k);
//		if (d > max_n) { // поиск максимального кол-ва делителей
//			max_n = d;
//		}
//		mapa[k] = d; // хранение числа и его кол-ва делителей
//		st.push(k);
//	}
//
//	while (!st.empty()) { // перекладываем в другой стек, при этом не берём числа с максимальным кол-вом делителей
//		if (mapa[st.top()] != max_n) {
//			res.push(st.top());
//		}
//		st.pop();
//	}
//
//	while (!res.empty()) { // вывод
//		cout << res.top() << " ";
//		res.pop();
//	}
//
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <stack>
//#include <unordered_map>
//using namespace std;
//
//int del(int n) { // ����� ���-�� ���������
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
//	for (int i = 0; i < n; i++) { // ����������
//		int k; cin >> k;
//		int d = del(k);
//		if (d > max_n) { // ����� ������������� ���-�� ���������
//			max_n = d;
//		}
//		mapa[k] = d; // �������� ����� � ��� ���-�� ���������
//		st.push(k);
//	}
//
//	while (!st.empty()) { // ������������� � ������ ����, ��� ���� �� ���� ����� � ������������ ���-��� ���������
//		if (mapa[st.top()] != max_n) {
//			res.push(st.top());
//		}
//		st.pop();
//	}
//
//	while (!res.empty()) { // �����
//		cout << res.top() << " ";
//		res.pop();
//	}
//
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//int main() {
//	int n, p; cin >> n >> p; // ���-�� ��������� � ����������� ��������
//	stack<int> st;
//	int max_n = INT_MIN;
//	for (int i = 0; i < n; i++) { // ���������� � ���� � ����� ����������� ��������
//		int k; cin >> k;
//		if (k >= max_n && k % 2 != 0) {
//			max_n = k;
//		}
//		st.push(k);
//	}
//	stack<int> res;
//	bool flag = true;
//	while (!st.empty()) { // ������������� � ������ ����, �������� ����� ������������ �������� �������
//		if (st.top() == max_n && flag) {
//			res.push(p);
//			flag = false;
//		}
//		res.push(st.top());
//		st.pop();
//	}
//	while (!res.empty()) { // �����
//		cout << res.top() << " ";
//		res.pop();
//	}
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include<set>
//
//using namespace std;
//
//void dfs1(vector<vector<int>> &gr, vector<bool> &used, vector<int> &order, int v) { // ����� � ������� ��� �������� �����
//	// ����� � ������� ��� �������� �����
//	used[v] = true;
//	for (auto i : gr[v]) {
//		if (!used[i]) {
//			dfs1(gr, used, order, i);
//		}
//	}
//	order.push_back(v);
//}
//
//void dfs2(vector<vector<int>> &grt, vector<bool> &used, vector<int> &component, int v) { // ����� � ������� ��� ������������������ �����
//	// ����� � ������� ��� ������������������ �����
//	used[v] = true;
//	component.push_back(v);
//	for (auto i : grt[v]) {
//		if (!used[i]) {
//			dfs2(grt, used, component, i);
//		}
//	}
//}
//
//int main() {
//	int n, m; cin >> n >> m;
//	vector<vector<int>> gr(n), grt(n);
//	for (int i = 0; i < m; i++) { // �������� ������� ��������� ��� �������� � ������������������ �����
//		int from, to;
//		cin >> from >> to;
//		gr[from].push_back(to); // ������� ����
//		grt[to].push_back(from);// ����������������� ����
//	}
//
//	vector<bool> used(n, false);
//	vector<int> order;
//
//	for (int i = 0; i < n; i++) { // ����� � ������� ��� ������ ������� �������� �����
//		if (!used[i]) {
//			dfs1(gr, used, order, i);
//		}
//	}
//	used.clear(); // ������� used 
//	used.assign(n, false); // ���������� used
//
//	cout << endl;
//
//	vector<int> component;
//	for (int i = 0; i < n; i++) { // ����� ���������� ������� ���������
//		int v = order[n - 1 - i];
//		if (!used[v]) {
//			dfs2(grt, used, component, v); // ����� ���������� ������� ���������
//			for (auto j : component) { // ����� ���������� ������� ���������
//				cout << j << " ";
//			}
//			cout << endl;
//			component.clear(); // ������� �������
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//
////������
////8 13
////0 1
////1 2
////1 4
////1 5
////2 3
////3 2
////3 7
////4 0
////4 5
////5 6
////6 5
////7 3
////7 6
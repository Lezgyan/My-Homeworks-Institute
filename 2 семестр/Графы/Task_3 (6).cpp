//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//using namespace std;
//
//int suma(vector<set<int>> &arr, int n, int r) { // ������� ������� �������
//	int res = 0;
//	res += arr[r].size(); // ������ 
//	for (int i = 0; i < n; i++) { // ������
//		if (i != r && arr[i].find(r) != arr[i].end()) {
//			res++;
//		}
//	}
//	return res;
//}
//
//int main() {
//	int n, m; cin >> n >> m;
//	vector<set<int>> arr(n);
//	for (int i = 0; i < m; i++) { // �������� ������� ���������
//		int from, to; 
//		cin >> from >> to;
//		from--; to--;
//		arr[from].insert(to);
//	}
//	
//	cout << endl;
//	for (int i = 0; i < n; i++) { // ������� � ������� ������� ��� ������ �������
//		cout << i + 1 << ":" << " " << suma(arr, n, i) << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//
//
////������ �����
////3 4
////1 2
////2 3
////3 1
////3 2
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int n, m; cin >> n >> m;
//	vector<vector<int>> arr(n);
//	for (int i = 0; i < m; i++) { // �������� ������� ���������
//		int from, to; 
//		cin >> from >> to;
//		from--; to--;
//		arr[from].push_back(to);
//	}
//	int A, B; // ���� ������
//	cin >> A >> B;
//	A--; B--;
//
//	arr[A].erase( // �������� ���� �� A � B
//		remove(arr[A].begin(), arr[A].end(), B), 
//		arr[A].end()
//	);
//
//	arr[B].erase( // �������� ���� �� B � A
//		remove(arr[B].begin(), arr[B].end(), A),
//		arr[B].end()
//	);
//
//	cout << endl;
//
//	for (int i = 0; i < n; i++) { // ����� ������� ��������� ��� ���� �� A � B
//		cout << i << ":" << " ";
//		for (int j = 0; j < arr[i].size(); j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
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
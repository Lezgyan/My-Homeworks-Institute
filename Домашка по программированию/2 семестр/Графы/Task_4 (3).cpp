//#include <iostream>
//#include <vector>
//#include <stack>
//using namespace std;
//
//void DFS(vector<vector<int>> &arr, vector<bool> &used, int from) { // поиск в глубину
//	stack<int> st;
//	st.push(from);
//	while (!st.empty()) {
//		from = st.top();
//		st.pop();
//		if (used[from]) {
//			continue;
//		}
//		used[from] = true;
//		for (int i = (int)arr[from].size() - 1; i >= 0; i--) {
//			if (!used[arr[from][i]]) {
//				st.push(arr[from][i]);
//			}
//		}
//	}
//}
//int main() {
//	int n, m; cin >> n >> m;
//	vector<vector<int>> arr(n);
//	for (int i = 0; i < m; i++) { // создание матрицы смежности
//		int from, to; cin >> from >> to;
//		from--; to--;
//		arr[from].push_back(to);
//	}
//	vector<bool> used(n, false);
//	int v;  // ввод и считывание вершины
//	cin >> v;
//	v--;
//	DFS(arr, used, v); 
//	for (int i = 0; i < n; i++) { // поиск вершин достижимых из данной и их вывод
//		if (used[i] == false) {
//			cout << i << " ";
//		}
//	}
//	system("pause");
//	return 0;
//}
//
////пример
////4 4
////1 2
////2 3
////3 4
////3 1
////3
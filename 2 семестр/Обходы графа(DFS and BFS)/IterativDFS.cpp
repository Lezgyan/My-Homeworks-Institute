//#include <iostream>
//#include <vector>
//#include <stack>
//#include <algorithm>
//
//using namespace std;
//
////пример
////7 8 = N, M
////0 1
////0 2
////0 4
////0 5
////1 3
////2 5
////4 6
////5 6
//
//void iterativeDFS(vector<vector<int>> &arr, int from, vector<bool> &used) {
//	stack<int> st;
//	st.push(from);
//	while (!st.empty()) {
//		from = st.top();
//		st.pop();
//		if (used[from]) {
//			continue;
//		}
//		used[from] = true;
//		cout << from << " ";
//		for (int i = (int)arr[from].size() - 1; i >= 0; i--) {
//			if (!used[arr[from][i]]) {
//				st.push(arr[from][i]);
//			}
//		}
//	}
//}
//
//int main() {
//
//	int N, M; cin >> N >> M;
//	vector<vector<int>> arr(N);
//	vector<bool> used(N);
//	for (int i = 0; i < M; i++) { // список смежности
//		int from = 0, to = 0;
//		cin >> from >> to;
//		arr[from].push_back(to);
//		arr[to].push_back(from);
//	}
//
//	for (int i = 0; i < N; i++) {
//		sort(arr[i].begin(), arr[i].end());
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (!used[i]) {
//			iterativeDFS(arr, i, used);
//		}
//	}
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//void BFS(vector<vector<int>> &arr, int from, vector<bool> &used) {
//	queue<int> q;
//	used[from] = true;
//	q.push(from);
//	while (!q.empty()) {
//		int f = q.front();
//		q.pop();
//		cout << f << " ";
//		for (auto i : arr[f]) {
//			if (!used[i]) {
//				used[i] = true;
//				q.push(i);
//			}
//		}
//	}
//}
//
//int main() {
//	int N, M; cin >> N >> M;
//	vector<vector<int>> arr(N);
//	vector<bool> used(N, false);
//	for (int i = 0; i < M; i++) { // список смежности
//		int from = 0, to = 0;
//		cin >> from >> to;
//		arr[from].push_back(to);
//		arr[to].push_back(from);
//	}
//
//	for (int i = 0; i < N; i++) { // соритировка смежных вершин
//		sort(arr[i].begin(), arr[i].end());
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (!used[i]) {
//			BFS(arr, i, used);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
////7 8 
////0 1
////0 2
////0 4
////0 5
////1 3
////2 5
////4 6
////5 6
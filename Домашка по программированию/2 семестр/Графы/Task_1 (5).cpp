//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n, m; cin >> n >> m;
//	vector<vector<int>> arr(n);
//	for (int i = 0; i < n; i++) { // создание матрицы смежности
//		int from, to; 
//		cin >> from >> to;
//		from--; to--;
//		arr[from].push_back(to);
//		arr[to].push_back(from);
//	}
//	int ans; cin >> ans;// ввод вершины 
//	ans--;
//	cout << arr[ans].size() << endl;
//	system("pause");
//	return 0;
//}
//
//
////пример ввода
////8
////7
////1 2
////1 3
////1 5
////1 6
////2 4
////3 6
////5 7
////6 7
////1
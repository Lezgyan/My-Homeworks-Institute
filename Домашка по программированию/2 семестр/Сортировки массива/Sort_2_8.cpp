//#include <iostream>
//#include <vector>
//#include <fstream>
//#include <algorithm>
//
//using namespace std;
//
//ifstream in("input.txt");
//ofstream out("output.txt");
//
//// ÑÄÅËÀÒÜ Ñ×ÈÒÛÂÀÍÈÅ ÈÇ ÔÀÉËÀ
//
//vector<vector<int>> read_file() {
//	int n; in >> n;
//	vector<vector<int>> arr(n, vector<int>(n, 0));
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			in >> arr[i][j];
//		}
//	}
//	return arr;
//}
//
//void merge(vector<int> &arr, int l, int m, int r) {
//	vector<int> res;
//	res.reserve(r - l + 1);
//	int i = l, j = m + 1;
//	while (i <= m && j <= r) {
//		if (arr[i] < arr[j]) {
//			res.push_back(arr[i]);
//			i++;
//		}
//		else {
//			res.push_back(arr[j]);
//			j++;
//		}
//	}
//	while (i <= m) {
//		res.push_back(arr[i]);
//		i++;
//	}
//
//	while (j <= r) {
//		res.push_back(arr[j]);
//		j++;
//	}
//
//	for (int i = l, k = 0; i <= r; i++, k++) {
//		arr[i] = res[k];
//	}
//}
//
//void merge_sort(vector<int> &a, int l, int r) {
//	if (l >= r) {
//		return;
//	}
//	int m = l + (r - l) / 2;
//	merge_sort(a, l, m);
//	merge_sort(a, m + 1, r);
//	merge(a, l, m, r);
//}
//int main() {
//	vector<vector<int>> arr;
//	arr = read_file();
//	int n = arr.size();
//
//	for (int i = 0; i < n; i++) {
//		vector<int> m;
//		for (int j = 0; j < n; j++) {
//			m.push_back(arr[i][j]);
//		}
//		int r = m.size() - 1;
//		merge_sort(m, 0, r);
//
//		if ((i + 1) % 3 == 0) {
//			reverse(m.begin(), m.end());
//		}
//
//		for (int j = 0; j < m.size(); j++) {
//			arr[i][j] = m[j];
//		}
//	}
//	out << n << endl;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			out << arr[i][j] << " ";
//		}
//		out << endl;
//	}
//
//	system("pause");
//	return 0;
//}
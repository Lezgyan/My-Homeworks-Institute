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
//// СДЕЛАТЬ СЧИТЫВАНИЕ ИЗ ФАЙЛА
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
//void selection_sort(vector<int>&arr) {
//	int k = 0;
//	int n = arr.size();
//	for (int i = 0; i < n; i++) {
//		int max_n = INT_MIN;
//		int p = 0;
//		for (int j = 0; j < n - k; j++) {
//			if (arr[j] > max_n) {
//				max_n = arr[j];
//				p = j;
//			}
//		}
//		swap(arr[p], arr[n - k - 1]);
//		k++;
//	}
//}
//
//int main() {
//	vector<vector<int>> arr;
//	arr = read_file();
//	int n = arr.size();
//
//	for (int i = 0; i < n; i++) { // выше главной
//		vector<int> m;
//		for (int j = 0; (j + 1 + i) < n; j++) {
//			m.push_back(arr[j][j + 1 + i]);
//		}
//		selection_sort(m);
//		reverse(m.begin(), m.end());
//
//		for (int j = 0; j < m.size(); j++) {
//			arr[j][j + 1 + i] = m[j];
//		}
//	}
//
//	for (int i = 0; i < n - 1; i++) { // ниже главной
//		vector<int> m;
//		for (int j = 1 + i; j < n; j++) {
//			m.push_back(arr[j][j - i - 1]);
//		}
//		selection_sort(m);
//		reverse(m.begin(), m.end());
//
//		int k = 0;
//		for (int j = 1 + i; j < n; j++) {
//			arr[j][j - i - 1] = m[k];
//			k++;
//		}
//
//	}
//
//
//	vector<int> m;
//	for (int i = 0; i < n; i++) { // главная
//		m.push_back(arr[i][i]);
//	}
//	selection_sort(m);
//	reverse(m.begin(), m.end());
//
//	for (int i = 0; i < n; i++) {
//		arr[i][i] = m[i];
//	}
//
//	out << n << endl;
//
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
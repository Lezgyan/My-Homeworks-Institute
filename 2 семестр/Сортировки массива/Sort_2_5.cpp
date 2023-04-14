#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

vector<vector<int>> read_file() {
	int n; in >> n;
	vector<vector<int>> arr(n, vector<int>(n, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			in >> arr[i][j];
		}
	}
	return arr;
}

void heapify(vector<int> &arr, int n, int i) {
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < n && arr[l] > arr[largest]) {
		largest = l;
	}
	if (r < n && arr[r] > arr[largest]) {
		largest = r;
	}

	if (largest != i) {
		swap(arr[largest], arr[i]);
		heapify(arr, n, largest);
	}
}

void heap_sort(vector<int>&arr, int n) {
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(arr, n, i);
	}
	for (int i = n - 1; i >= 0; i--) {
		swap(arr[i], arr[0]);
		heapify(arr, i, 0);
	}
}

int main() {
	vector<vector<int>> arr;
	arr = read_file();
	int n = arr.size();


	for (int i = 0; i < n; i++) {
		vector<int> m;
		for (int j = 0; j < n; j++) {
			m.push_back(arr[j][i]);
		}
		heap_sort(m, n);
		for (int j = 0; j < n; j++) {
			arr[j][i] = m[j];
		}
	}


	out << n << endl;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			out << arr[i][j] << " ";
		}
		out << endl;
	}

	system("pause");
	return 0;
}
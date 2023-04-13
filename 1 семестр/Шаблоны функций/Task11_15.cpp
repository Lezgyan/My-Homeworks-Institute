#include <iostream>
using namespace std;

template <typename X>
X **create(int n, int m) {
	X **arr = new X *[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new X[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	return arr;
}

template <typename X>
void print(X **arr, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

template <typename X>
void change(X **arr, int n, int m) {
	X min_sum = 0;
	for (int i = 0; i < n; i++) {
		min_sum += arr[i][0];
	}
	int ni = 0;
	for (int i = 0; i < m; i++) {
		X suma = 0;
		for (int j = 0; j < n; j++) {
			suma += arr[j][i];
		}
		if (suma < min_sum) {
			min_sum = suma;
			ni = i;
		}
	}
	for (int i = 0; i < n; i++) {
		swap(arr[i][ni], arr[i][m - 1]);
	}
}
int main() {
	int n, m;
	cin >> n >> m;
	int k;
	cin >> k;
	switch (k) {
		case 1: {
			int **arr = create<int>(n, m);
			change(arr, n, m);
			cout << endl;
			print(arr, n, m);
			break;
		}
		case 2: {
			double **arr = create<double>(n, m);
			change(arr, n, m);
			cout << endl;
			print(arr, n, m);
			break;
		}
		case 3: {
			char **arr = create<char>(n, m);
			change(arr, n, m);
			cout << endl;
			print(arr, n, m);
			break;
		}
	}
	system("pause");
	return 0;
}
#include <iostream>

using namespace std;

int **create(int n) {
	int** mas = new int*[n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mas[i][j];
		}
	}
	return mas;
}

void change(int** mas, int n, int m) {
	for (int i = 0; i < m - 1; i++) { // столбцы
		int cnt = 0;
		for (int j = 0; j < n; j++) { // строки
			if (mas[j][i] % 2 == 0) {
				cnt++;
			}
		}
		if (cnt == n) {
			for (int k = i; k < m; k++) {
				for (int p = 0; p < n; p++) {
					mas[p][k] = mas[p][k + 1];
				}
			}
			m--;
			i--;
		}
	}
}

void print(int** mas, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	setlocale(LC_ALL, "RUS");
	int n;
	cout << "¬ведите n = ";
	cin >> n;
	int m = n;
	int** mas = create(n);
	int res = 0;
	for (int i = 0; i < n; i++) {
		int c = 0;
		for (int j = 0; j < m; j++) {
			if (mas[j][i] % 2 == 0) {
				c++;
			}
		}
		if (c == n) {
			res++;
		}
	}
	change(mas, n, m);
	cout << endl;
	print(mas, n, m - res);
	system("pause");
	return 0;
}
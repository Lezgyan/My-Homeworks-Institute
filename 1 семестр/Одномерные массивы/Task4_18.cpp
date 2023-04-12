#include <iostream>
#include <limits.h>
using namespace std;
int main() {
	int n;
	cout << "n = ";
	cin >> n;
	int *mas = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
	int minn = INT_MAX;
	int k;
	int maxn = INT_MIN;
	int p;
	for (int i = 0; i < n; i++) {
		if (mas[i] < minn) {
			minn = mas[i];
			k = i;
		}
		if (mas[i] >= maxn) {
			maxn = mas[i];
			p = i;
		}
	}
	swap(mas[p], mas[k]);
	for (int i = 0; i < n; i++) {
		cout << mas[i] << " ";
	}
	system("pause");
	return 0;
}
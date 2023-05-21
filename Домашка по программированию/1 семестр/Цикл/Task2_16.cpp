#include <iostream>
using namespace std;
int main() {
	int n = 4;
	for (int i = 1; i <= n; i++) { // количество блоков
		for (int j = 1; j <= i; j++) { // перебор нечётных строк
			cout << i << " ";
		}
		cout << endl;
		for (int j = 1; j <= i; j++) { // перебо чётных строк
			cout << 2 * i << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

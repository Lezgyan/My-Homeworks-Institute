#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> arr;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int k; cin >> k;
		arr.push_back(k);
	}
	vector<int> mas;
	int m; cin >> m;
	for (int i = 0; i < m; i++) {
		int k; cin >> k;
		mas.push_back(k);
	}

	vector<int>::iterator it = remove_if(arr.begin(), arr.end(),
		[](int &x) { return x % 2 == 0; });
	arr.erase(it, arr.end());

	vector<int>::iterator tr = remove_if(mas.begin(), mas.end(),
		[](int &x) { return x % 2 != 0; });
	mas.erase(tr, mas.end());

	sort(arr.begin(), arr.end());
	sort(mas.begin(), mas.end());

	vector<int> res;
	merge(arr.begin(), arr.end(), mas.begin(), mas.end(), back_inserter(res));
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << " ";
	}
	system("pause");
	return 0;
}
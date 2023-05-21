//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	vector<int> arr;
//	int n; cin >> n;
//
//	for (int i = 0; i < n; i++) { //считывание
//		int k; cin >> k;
//		arr.push_back(k); // добавление в массив
//	}
//	int max_el = *max_element(arr.begin(), arr.end());
//	vector<int>::iterator it = remove_if(arr.begin(), arr.end(),
//		[&max_el](int& x) { return x == max_el; });// перенос в конец
//	arr.erase(it, arr.end()); // удаление этих элементов
//	for (int i = 0; i < arr.size(); i++) { // вывод
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	int new_el; cin >> new_el;
//	for (int i = 0; i < arr.size(); i++) { // добавление элемента после чётных эл-тов
//		if (arr[i] % 2 == 0) {
//			arr.insert(arr.begin() + i + 1, new_el);
//			i++;
//		}
//	}
//	for (int i = 0; i < arr.size(); i++) { // вывод
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	sort(arr.begin(), arr.end()); // сортировка
//	for (int i = 0; i < arr.size(); i++) { // вывод
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	vector<int>::iterator tr = unique(arr.begin(), arr.end()); // перенос подряд идущих одинаковых эл-тов в конец
//	arr.erase(tr, arr.end()); // удаление
//
//	for (int i = 0; i < arr.size(); i++) { // вывод
//		cout << arr[i] << " ";
//	}
//
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <string>
//#include <map>
//#include <set>
//#include <fstream>
//using namespace std;
//
//bool is_number(string s) { // проверка на число
//	bool flag = true;
//	for (int i = 0; i < s.size(); i++) {
//		if (!isdigit(s[i])) {
//			flag = false;
//			break;
//		}
//	}
//	return flag;
//}
//int main() {
//	map<string, int> mapa;
//	string res;
//	int k; cin >> k;
//	ifstream input("C:\\Users\\lezgy\\OneDrive\\Рабочий стол\\Task.txt"); // считывание
//	getline(input, res);
//	res += ' ';
//	int q = 0;
//	for (int i = 1; i < res.size(); i++) { // разбиение по словам 
//		if (res[i] == ' ') {
//			string d = res.substr(q, i - q);
//			if (is_number(d)) {
//				mapa[d]++; // подсчёт кол-ва слов
//			}
//			q = i + 1;
//		}
//	}
//	for (auto i : mapa) { // вывод подходящих слов
//		if (i.second == k) {
//			cout << i.first << " " << i.second << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
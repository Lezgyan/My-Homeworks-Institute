//#include <iostream>
//#include <string>
//#include <map>
//#include <set>
//#include <fstream>
//using namespace std;
//
//bool is_number(string s) { // �������� �� �����
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
//	ifstream input("C:\\Users\\lezgy\\OneDrive\\������� ����\\Task.txt"); // ����������
//	getline(input, res);
//	res += ' ';
//	int q = 0;
//	for (int i = 1; i < res.size(); i++) { // ��������� �� ������ 
//		if (res[i] == ' ') {
//			string d = res.substr(q, i - q);
//			if (is_number(d)) {
//				mapa[d]++; // ������� ���-�� ����
//			}
//			q = i + 1;
//		}
//	}
//	for (auto i : mapa) { // ����� ���������� ����
//		if (i.second == k) {
//			cout << i.first << " " << i.second << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
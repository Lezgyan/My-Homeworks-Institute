//#include <iostream>
//#include <set>
//#include <string>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//void remove_keys(map<string, int> &m, const map<string, int> &keys) { // �������� 
//	for (auto it = m.begin(); it != m.end();) {
//		auto curr = it++;
//		if (keys.find(curr->first) != keys.cend()) {
//			m.erase(curr);
//		}
//	}
//}
//
//void down(string &w) {
//	for (int i = 0; i < w.size(); i++) { // ���������� � ������� ��������
//		w[i] = tolower(w[i]);
//	}
//}
//
//void d(int start, int finish, string &s, map<string, int> &mapa) { // ���������� � map �����
//	int q = start;
//	for (int i = start; i <= finish; i++) { // ��������� �� ������ 
//		if (s[i] == ' ' || (i == finish)) {
//			string d = s.substr(q, i - q);
//			down(d);
//			mapa[d]++; // ������� ���-�� ����
//			q = i + 1;
//		}
//	}
//}
//
//int main() {
//	string s, res;
//	getline(cin, s);
//	map<string, int> mapa, ret;
//
//	int j = 0;
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] == '.') { // ����� �������������� �����������
//			d(j, i, s, mapa);
//			j = i + 2;
//		}
//		else if (s[i] == '!' || s[i] == '?') {// ����� �� �������������� �����������
//			d(j, i, s, ret);
//			j = i + 2;
//		}
//	}
//
//	remove_keys(mapa, ret); // ��������
//
//	for (auto i : mapa) { // ����� ����� ���� � ����� ����
//		cout << i.first << " " << i.second << endl;
//	}
//
//	system("pause");
//	return 0;
//}
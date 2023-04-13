//#include <iostream>
//#include <string>
//#include <set>
//using namespace std;
//int main() {
//	string s;
//	getline(cin, s);
//	string w;
//	cin >> w;
//	s = s + ' ';
//	int first = 0;
//	while (s.find(' ', first) != -1) {
//		int second = s.find(' ', first + 1);
//		int cnt = 0;
//		string s1;
//		s1 = s.substr(first, second - first);
//		for (int i = 0; i < w.size(); i++) {
//			if (s1.find(w[i]) != -1) {
//				cnt++;
//			}
//		}
//		if (cnt == w.size()) {
//			s.erase(first, second - first + 1);
//		}
//		else {
//			first = second + 1;
//		}
//	}
//	cout << s;
//	system("pause");
//	return 0;
//}
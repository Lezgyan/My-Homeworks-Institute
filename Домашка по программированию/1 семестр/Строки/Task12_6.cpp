//#include <iostream>
//#include <string>
//#include <set>
//using namespace std;
//int main() {
//	string s, s1;
//	getline(cin, s);
//	set<char> seta;
//	int k = s.rfind(' ');
//	for (int i = k + 1; i < s.size() - 1; i++) {
//		if (!(ispunct(s[i]))) {
//			seta.insert(s[i]);
//		}
//	}
//	s = s + ' ';
//	int first = 0;
//	while (s.find(' ', first) != -1) {
//		int second = s.find(' ', first + 1);
//		for (int i = first; i < second; i++) {
//			if (seta.find(s[i]) != seta.end()) {
//				s1 = s.substr(first, second - first);
//				for (int w = 0; w < s1.size(); w++) {
//					if (!(ispunct(s[w]))) {
//						cout << s1[w];
//					}
//				}
//				cout << endl;
//				break;
//			}
//		}
//		first = second + 1;
//	}
//	system("pause");
//	return 0;
//}
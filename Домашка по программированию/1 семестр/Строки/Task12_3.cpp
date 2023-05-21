//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	string s;
//	getline(cin, s);
//	string::size_type i = 0;
//	while (i != -1) {
//		i = s.find_first_of("aeiouyAEIOUY", i);
//		if (i != (-1)) {
//			s[i] = ' ';
//		}
//	}
//	cout << s;
//	system("pause");
//	return 0;
//}



//#include <iostream>
//#include <string>
//#include <set>
//using namespace std;
//int main() {
//	string s;
//	getline(cin, s);
//	set<char> seta {'a','e','i','o','u','y'};
//	for (string::size_type i = 0; i < s.length(); i++) {
//		if (seta.find(tolower(s[i])) != seta.end()) {
//			s[i] = '_';
//		}
//	}
//	cout << s;
//	system("pause");
//	return 0;
//}
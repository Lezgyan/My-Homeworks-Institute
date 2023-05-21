//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>
//using namespace std;
//
//ifstream in("input.txt");
//ofstream out("output.txt");
//
//struct date {
//	int dd, mm, yy;
//};
//
//struct people {
//	string second_name;
//	string post;
//	date date_of_birth;
//	int experience;
//	int money;
//};
//
//bool operator < (people a, people b) {//переопределяем оператор < в соотвествии с условием
//	 if (a.second_name < b.second_name) return true;
//	 if (a.second_name == b.second_name && a.experience < b.experience) return true;
//	 if (a.second_name == b.second_name && a.experience == b.experience && a.date_of_birth.yy < b.date_of_birth.yy) return true;
//	 return false;//}//
//
//ostream &operator << (ostream &out, const people &t) {
//	out << t.second_name << " " << t.post << " " << t.date_of_birth.dd << "." << t.date_of_birth.mm << "."
//		<< t.date_of_birth.yy << " " << t.experience << " " << t.money;
//	return out;
//}
//
//date str_cut(string s) {
//	date x;
//	string temp = s.substr(0, 2);
//	x.dd = stoi(temp);
//	temp = s.substr(3, 2);
//	x.mm = stoi(temp);
//	temp = s.substr(6, 4);
//	x.yy = stoi(temp);
//	return x;
//}
//
//vector<people> read_file() {
//	vector<people> x;
//	while (in.peek() != EOF) {
//		people t;
//		in >> t.second_name;
//		in >> t.post;
//		string s;
//		in >> s;
//		t.date_of_birth = str_cut(s);
//		in >> t.experience;
//		in >> t.money;
//		x.push_back(t);
//	}
//	return x;
//}
//
//void insertion(vector<people> &a) {
//	int n = a.size();
//	for (int i = 0; i < n; i++) {
//		for (int j = i; j > 0 && a[j] < a[j - 1]; j--) {
//			swap(a[j], a[j - 1]);
//		}
//	}
//}
//
//int main() {
//	vector<people> arr;
//	arr = read_file();
//	insertion(arr);
//	for (auto i : arr) {
//		out << i << "\n";
//	}
//	out.close();
//	in.close();
//	system("pause");
//	return 0;
//}
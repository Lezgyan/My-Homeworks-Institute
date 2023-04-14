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
//bool operator < (const people &a, const people &b) {
//	return a.money < b.money;
//}
//
//bool operator > (const people &a, const people &b) {
//	return a.money > b.money;
//}
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
//int partition(vector<people> &arr, int l, int r) {
//	people m = arr[l + (r - l) / 2];
//	while (l <= r) {
//		while (arr[l] < m) {
//			l++;
//		}
//		while (arr[r] > m) {
//			r--;
//		}
//		if (l >= r) {
//			return r;
//		}
//		swap(arr[l], arr[r]);
//		l++;
//		r--;
//	}
//	return r;
//}
//
//void quick_sort(vector<people> &arr, int left, int right) {
//	if (left < right) {
//		int m = partition(arr, left, right);
//		quick_sort(arr, left, m);
//		quick_sort(arr, m + 1, right);
//	}
//}
//
//int main() {
//	vector<people> arr;
//	arr = read_file();
//	quick_sort(arr, 0, arr.size() - 1);
//	for (auto i : arr) {
//		out << i << "\n";
//	}
//	out.close();
//	in.close();
//	system("pause");
//	return 0;
//}
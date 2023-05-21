#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

struct date {
	int dd, mm, yy;
};

struct people {
	string second_name;
	string post;
	date date_of_birth;
	int experience;
	int money;
};

bool operator < (people a, people b) {//переопределяем оператор < в соотвествии с условием
	 if (a.money < b.money) return true;
	 if (a.money == b.money && a.date_of_birth.yy < b.date_of_birth.yy) return true;
	 return false;}

ostream &operator << (ostream &out, const people &t) {
	out << t.second_name << " " << t.post << " " << t.date_of_birth.dd << "." << t.date_of_birth.mm << "."
		<< t.date_of_birth.yy << " " << t.experience << " " << t.money;
	return out;
}

date str_cut(string s) {
	date x;
	string temp = s.substr(0, 2);
	x.dd = stoi(temp);
	temp = s.substr(3, 2);
	x.mm = stoi(temp);
	temp = s.substr(6, 4);
	x.yy = stoi(temp);
	return x;
}

vector<people> read_file() {
	vector<people> x;
	while (in.peek() != EOF) {
		people t;
		in >> t.second_name;
		in >> t.post;
		string s;
		in >> s;
		t.date_of_birth = str_cut(s);
		in >> t.experience;
		in >> t.money;
		x.push_back(t);
	}
	return x;
}

void merge(vector<people> &a, int l, int m, int r) {
	vector<people> res;
	res.reserve(r - l + 1);
	int i = l, j = m + 1;
	while (i <= m && j <= r) {
		if (a[i] < a[j]) {
			res.push_back(a[i]);
			i++;
		}
		else {
			res.push_back(a[j]);
			j++;
		}
	}
	while (i <= m) {
		res.push_back(a[i]);
		i++;
	}
	while (j <= r) {
		res.push_back(a[j]);
		j++;
	}
	for (int i = l, k = 0; i <= r; i++, k++) {
		a[i] = res[k];
	}
}

void merge_sort(vector<people> &arr, int l, int r) {
	if (l >= r) {
		return;
	}
	int m = l + (r - l) / 2;
	merge_sort(arr, l, m);
	merge_sort(arr, m + 1, r);
	merge(arr, l, m, r);
}

int main() {
	vector<people> arr;
	arr = read_file();
	int r = arr.size() - 1;
	merge_sort(arr, 0, r);
	for (auto i : arr) {
		out << i << "\n";
	}
	out.close();
	in.close();
	system("pause");
	return 0;
}
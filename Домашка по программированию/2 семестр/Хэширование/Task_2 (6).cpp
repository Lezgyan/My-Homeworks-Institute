//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>
//using namespace std;
//
//ifstream in("input.txt"); // ввод из файла
//ofstream out("output.txt"); // вывод в файл
//
//struct date { // структура даты рождения
//	int dd, mm, yy;
//};
//
//struct people { // структура человека
//	string second_name;
//	string post;
//	date date_of_birth;
//	int experience;
//	int money;
//};
//
//ostream &operator << (ostream &out, const people &t) { // перегрузка оператора вывода
//	cout << t.second_name << " " << t.post << " " << t.date_of_birth.dd << "." << t.date_of_birth.mm << "."
//		<< t.date_of_birth.yy << " " << t.experience << " " << t.money;
//	return cout;
//}
//
//date str_cut(string s) { // разбиение даты
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
//istream &operator >> (istream &in, people &t) { // перегрузка оператора ввода
//	in >> t.second_name;
//	in >> t.post;
//	string s;
//	in >> s;
//	t.date_of_birth = str_cut(s);
//	in >> t.experience;
//	in >> t.money;
//	return in;
//}
//
//bool operator == (const people &a, const people &b) { // перегрузка оператора равно
//	return a.experience == b.experience && a.money == b.money && a.post == b.post && a.second_name == b.second_name
//		&& a.date_of_birth.dd == b.date_of_birth.dd && a.date_of_birth.mm == b.date_of_birth.mm &&
//		a.date_of_birth.yy == b.date_of_birth.yy;
//}
//
//vector<people> read_file() { // функция чтения из файла
//	vector<people> x;
//	while (in.peek() != EOF) {
//		people t;
//		in >> t;
//		x.push_back(t);
//	}
//	return x;
//}
//
//pair<int, people*> fn(vector<people*> &mas, people *a, int M) { // поиск человека в hash-таблице
//	pair<int, people*> ans;
//	bool flag = false;
//	int j = 1;
//	int c_1 = 1, c_2 = 3;
//	while (flag != true) {
//		int tt = (a->experience + c_1 * j + c_2 * j*j) % M;
//		if (mas[tt] != NULL && *mas[tt] == *a) {
//			ans = make_pair(tt, a);
//			flag = true;
//		}
//		j++;
//	}
//	return ans;
//}
//
//int main() {
//	vector<people> arr;
//	arr = read_file();
//	int N = arr.size();
//
//	/*int alpha; cin >> alpha;*/
//	const int M = 30;
//
//	vector<people*> mas(M); // hash-таблица
//	int c_1 = 1, c_2 = 3;
//	for (int i = 0; i < N; i++) {
//		int tt = (arr[i].experience + c_1 * i + c_2 * i*i) % M; // квадратичное хэширование
//		if (mas[tt] == NULL) {
//			mas[tt] = &arr[i];
//		}
//		else {
//			bool flag = false;
//			int j = 1;
//			while (flag != true) { // поиск свободного места
//				tt = (arr[i].experience + c_1 * j + c_2 * j*j) % M;
//				if (mas[tt] == NULL) {
//					mas[tt] = &arr[i];
//					flag = true;
//				}
//				j++;
//			}
//		}
//	}
//
//	for (int i = 0; i < M; i++) { // вывод hash-таблицы
//		cout << i << ": ";
//		if (mas[i] != NULL) {
//			cout << *mas[i];
//		}
//		cout << endl;
//	}
//
//	people d; cin >> d;
//	cout << fn(mas, &d, M).first << " " << *fn(mas, &d, M).second << endl; // поиск человека в hash-таблице
//
//	out.close();
//	in.close();
//	system("pause");
//	return 0;
//}
//

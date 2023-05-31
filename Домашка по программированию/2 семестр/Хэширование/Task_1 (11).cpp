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
//	out << t.second_name << " " << t.post << " " << t.date_of_birth.dd << "." << t.date_of_birth.mm << "."
//		<< t.date_of_birth.yy << " " << t.experience << " " << t.money;
//	return out;
//}
//
//date str_cut(string s) { // разбиение даты рождения 
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
//vector<people> read_file() { // чтение из файла
//	vector<people> x;
//	while (in.peek() != EOF) {
//		people t;
//		in >> t;
//		x.push_back(t);
//	}
//	return x;
//}
//
//struct list { // структура узла списка
//	people inf;
//	list *next;
//	list *prev;
//};
//
//struct htlist { // структура списка
//	list *h = NULL;
//	list *t = NULL;
//};
//
//void push_end(htlist *g, people x) { // добавление в конец
//	list *r = new list;
//	r->inf = x;
//	r->next = NULL;
//	if (!g->h && !g->t) {
//		r->prev = NULL;
//		g->h = r;
//	}
//	else {
//		g->t->next = r;
//		r->prev = g->t;
//	}
//	g->t = r;
//}
//
//void print(htlist *g) { // распечатка списка
//	list *p = g->h;
//	while (p) {
//		cout << p->inf << " ";
//		p = p->next;
//	}
//}
//
//list *find_fr(htlist *g, people &x) { // поиск вхождения элемента
//	list *p = g->h;
//	while (p) {
//		if (p->inf == x) {
//			break;
//		}
//		p = p->next;
//	}
//	return p;
//}
//
//
//void del_node(htlist *g, list *r) { // удаление элемента
//	if (r == g->h && r == g->t) {
//		g->h = NULL;
//		g->t = NULL;
//	}
//	else if (r == g->h) {
//		g->h = g->h->next;
//		g->h->prev = NULL;
//	}
//	else if (r == g->t) {
//		g->t = g->t->prev;
//		g->t->next = NULL;
//	}
//	else {
//		r->next->prev = r->prev;
//		r->prev->next = r->next;
//	}
//	delete r;
//}
//
//list *fn(vector<htlist*> &mas, people &a, int M) { // поиск человека в hash-таблице
//	int p = a.experience % M;
//	list *ter = find_fr(mas[p], a);
//	return ter;
//}
//
//void rem(vector<htlist*> &mas, people &a, int M) { // удаление человека в hash-таблице
//	int p = a.experience % M;
//	list *r = fn(mas, a, M);
//	if (r != NULL) {
//		del_node(mas[p], r);
//	}
//}
//
//int main() {
//	vector<people> arr;
//	arr = read_file(); 
//	int N = arr.size();
//	list *h = NULL, *t = NULL;
//
//	int alpha; cin >> alpha; // кол-во элементов по одному остатку
//	int M = N / alpha; // размер hash-таблицы
//
//	vector<htlist*> mas(M);
//
//	for (int i = 0; i < M; i++) {
//		mas[i] = new htlist;
//	}
//
//	for (int i = 0; i < N; i++) { // создание hash-таблицы
//		int p = arr[i].experience % M;
//		push_end(mas[p], arr[i]);
//	}
//
//	int j = 0;
//	for (auto i : mas) { // вывод hash-таблицы
//		cout << j << ":";
//		print(i);
//		cout << endl;
//		j++;
//	}
//
//	cout << "If you want to find element input - 1, else if you want to remove element input - 2" << endl;
//	int w; cin >> w;
//	people d; cin >> d;
//	switch (w) {
//	case 1: cout << fn(mas, d, M)->inf; break; // поиск человека
//	case 2: { // удаление человека
//			rem(mas, d, M);
//			int z = 0;
//			for (auto i : mas) {
//				cout << z << ":";
//				print(i);
//				cout << endl;
//				z++;
//			}
//			break; 
//		}
//	}
//
//	cout << endl;
//
//	out.close();
//	in.close();
//	system("pause");
//	return 0;
//}
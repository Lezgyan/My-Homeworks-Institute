//#include <iostream>
//
//using namespace std;
//
//struct list { // структура списка
//	int inf;
//	list *next;
//	list *prev;
//};
//
//void push_end(list *&h, list *&t, int x) { // добавление в конец
//	list *r = new list;
//	r->inf = x;
//	r->next = NULL;
//	if (!h && !t) {
//		r->prev = NULL;
//		h = r;
//	}
//	else {
//		t->next = r;
//		r->prev = t;
//	}
//	t = r;
//}
//
//void print(list *&h, list*&t) { // распечатка списка
//	list *p = h;
//	while (p) {
//		cout << p->inf << " ";
//		p = p->next;
//	}
//}
//
//void del_node(list *&h, list *&t, list *r) { // удаление элемента
//	if (r == h && r == t) {
//		h = NULL;
//		t = NULL;
//	}
//	else if (r == h) {
//		h = h->next;
//		h->prev = NULL;
//	}
//	else if (r == t) {
//		t = t->prev;
//		t->next = NULL;
//	}
//	else {
//		r->next->prev = r->prev;
//		r->prev->next = r->next;
//	}
//	delete r;
//}
//
//list *find_fr(list *h, list *t, int x) { // поиск первого вхождения элемента
//	list *p = h;
//	while (p) {
//		if (p->inf == x) {
//			break;
//		}
//		p = p->next;
//	}
//	return p;
//}
//
//list *find_ls(list *h, list *t, int x) { // поиск последнего вхождения элемента
//	list *p = t;
//	while (p) {
//		if (p->inf == x) {
//			break;
//		}
//		p = p->prev;
//	}
//	return p;
//}
//
//int main() {
//	list *h = NULL, *t = NULL; // создание списка
//	int n; cin >> n;
//	int min_n = INT_MAX;
//	for (int i = 0; i < n; i++) { // считывание
//		int x; cin >> x;
//		if (x < min_n) { // поиск минимума
//			min_n = x;
//		}
//		push_end(h, t, x); // добавление в список
//	}
//	list *r = find_fr(h, t, min_n); // поиск первого вхождения минимума
//	list *w = find_ls(h, t, min_n); // поиск последнего входения минимума
//
//	del_node(h, t, r); // удаление
//	del_node(h, t, w);
//
//	print(h, t); // вывод
//	system("pause");
//	return 0;
//}
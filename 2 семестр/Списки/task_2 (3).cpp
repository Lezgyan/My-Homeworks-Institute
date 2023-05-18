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
//void solve(list *&h, list *&t) { // поиск первого вхождения элемента
//	list *ans = h;
//	list *p = h->next;
//	int cnt = 0;
//	while (p) {
//		if (p->inf == ans->inf) {
//			list *temp = p->next;
//			del_node(h, t, p);
//			p = temp;
//		}
//		else {
//			ans = p;
//			p = p->next;
//		}
//	}
//}
//
//int main() {
//	list *h = NULL, *t = NULL;
//	int n; cin >> n;
//	for (int i = 0; i < n; i++) {
//		int x; cin >> x;
//		push_end(h, t, x);
//	}
//	solve(h, t);
//	print(h, t);
//	system("pause");
//	return 0;
//}
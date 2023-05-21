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
//void swap_nodes(list *&h, list *&t,list *a, list *b) { // смена указателей
//	if (a == b) {
//		return;
//	}
//	else if (a->next == b) {
//		a->next = b->next;
//		b->prev = a->prev;
//		b->next = a;
//		a->prev = b;
//	}
//	else {
//		list *p = b->prev, *n = b->next;
//		b->prev = a->prev;
//		b->next = a->next;
//
//		a->prev = p;
//		a->next = n;
//		
//		if (a->prev != NULL) {
//			a->prev->next = a;
//		}
//		if (b->next != NULL) {
//			b->next->prev = b;
//		}
//	}
//	if (a->next != NULL) {
//		a->next->prev = a;
//	}
//	else {
//		t = a;
//	}
//	if (b->prev != NULL) {
//		b->prev->next = b;
//	}
//	else {
//		h = b;
//	}
//}
//
//void bubble_sort(list *&h, list *&t) { // пузырьковая сортировыка
//	while (true) {
//		bool flag = false;
//		list *s = h;
//		while (s->next) {
//			list *w = s->next;
//			if (s->next->inf < s->inf) { // меняем местами
//				swap_nodes(h, t, s, s->next);
//				flag = true;
//			}
//			s = w;
//		}
//		if (!flag) {
//			break;
//		}
//	}
//}
//
//int main() {
//	int n; cin >> n;
//	list *h = NULL, *t = NULL;
//	for (int i = 0; i < n; i++) { // добавление в список
//		int x; cin >> x;
//		push_end(h, t, x);
//	}
//	bubble_sort(h, t); // пузырёк
//	print(h, t); // вывод
//	system("pause");
//	return 0;
//}
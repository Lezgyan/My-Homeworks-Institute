//#include <iostream>
//
//using namespace std;
//
//struct list { // ��������� ������
//	int inf;
//	list *next;
//	list *prev;
//};
//
//void push_end(list *&h, list *&t, int x) { // ���������� � �����
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
//void print(list *&h, list*&t) { // ���������� ������
//	list *p = h;
//	while (p) {
//		cout << p->inf << " ";
//		p = p->next;
//	}
//}
//
//void del_node(list *&h, list *&t, list *r) { // �������� ��������
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
//list *find_fr(list *h, list *t, int x) { // ����� ������� ��������� ��������
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
//list *find_ls(list *h, list *t, int x) { // ����� ���������� ��������� ��������
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
//	list *h = NULL, *t = NULL; // �������� ������
//	int n; cin >> n;
//	int min_n = INT_MAX;
//	for (int i = 0; i < n; i++) { // ����������
//		int x; cin >> x;
//		if (x < min_n) { // ����� ��������
//			min_n = x;
//		}
//		push_end(h, t, x); // ���������� � ������
//	}
//	list *r = find_fr(h, t, min_n); // ����� ������� ��������� ��������
//	list *w = find_ls(h, t, min_n); // ����� ���������� �������� ��������
//
//	del_node(h, t, r); // ��������
//	del_node(h, t, w);
//
//	print(h, t); // �����
//	system("pause");
//	return 0;
//}
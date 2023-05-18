//#include <iostream>
//
//using namespace std;
//
//struct queue {
//	int inf;
//	queue *next;
//};
//
//void push(queue *&h, queue *&t, int x) { // �������� ������� � �����
//	queue *r = new queue;
//	r->inf = x;
//	r->next = NULL;
//	if (!h && !t) {
//		h = r;
//		t = r;
//	}
//	else {
//		t->next = r;
//		t = r;
//	}
//}
//
//void pop(queue *&h, queue *&t) { // ������� ������
//	queue *r = h;
//	h = h->next;
//	if (!h) {
//		t = NULL;
//	}
//	delete r;
//}
//
//int head(queue *h) { // ����� ������
//	queue *r = h;
//	int i = h->inf;
//	return i;
//}
//
//bool empty(queue *h, queue *t) { // �������� �� ������� �������
//	return h == NULL && t == NULL;
//}
//
//int main() {
//	queue *h = NULL, *t = NULL; // ������ �������
//	int n; cin >> n;
//	int max_n = INT_MIN;
//	for (int i = 0; i < n; i++) { // ���������� ���������
//		int k; cin >> k;
//		if (k > max_n) { // ����� ���������
//			max_n = k;
//		}
//		push(h, t, k);
//	}
//	int f = head(h); // ������ �������
//	queue *h1 = NULL, *t1 = NULL;
//	while (!empty(h, t)) {
//		push(h1, t1, head(h));
//		if (head(h) == f) { 
//			push(h1, t1, max_n); // ������� ����� �������� ������� ������� ������������� ��-��
//		}
//		pop(h, t);
//	}
//	while (!empty(h1, t1)) { // �����
//		cout << head(h1) << " ";
//		pop(h1, t1);
//	}
//	system("pause");
//	return 0;
//}
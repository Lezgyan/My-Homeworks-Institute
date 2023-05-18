//#include <iostream>
//
//using namespace std;
//
//struct queue {
//	int inf;
//	queue *next;
//};
//
//void push(queue *&h, queue *&t, int x) { // добавить элемент в хвост
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
//void pop(queue *&h, queue *&t) { // удалить голову
//	queue *r = h;
//	h = h->next;
//	if (!h) {
//		t = NULL;
//	}
//	delete r;
//}
//
//int head(queue *h) { // взять голову
//	queue *r = h;
//	int i = h->inf;
//	return i;
//}
//
//bool empty(queue *h, queue *t) { // проверка на пустоту очереди
//	return h == NULL && t == NULL;
//}
//
//int main() { 
//	queue *h = NULL, *t = NULL;
//	int n; cin >> n;
//	int min_n = INT_MAX;
//	for (int i = 0; i < n; i++) { // считываем элементы
//		int k; cin >> k;
//		if (k < min_n) { // поиск минимума
//			min_n = k;
//		}
//		push(h, t, k);
//	}
//	bool flag = true;
//	while (!empty(h, t) && head(h) != min_n) { // пока не нашли минимум перекладываем эл-нт в хвост
//		push(h, t, head(h));
//		pop(h, t);
//	}
//
//	while (!empty(h, t)) { // вывод
//		cout << head(h) << " ";
//		pop(h, t);
//	}
//
//	system("pause");
//	return 0;
//}
#include <iostream>
#include <string>
using namespace std;

struct stack {
	char inf;
	stack *next;
};

void push(stack *&h, char x) {
	stack *r = new stack;
	r->inf = x;
	r->next = h;
	h = r;
}

void pop(stack *&h) {
	stack *r = h;
	h = h->next;
	delete r;
}
char top(stack *h) {
	return h->inf;
}
bool empty(stack *h) {
	return h == NULL;
}

int prior(char x) {
	switch (x) {
	case ')':
		return 1;
	case '+':case'-':
		return 2;
	case '*':case'/':
		return 3;
	}
	return -1;
}

int main() {
	string s; cin >> s;
	stack *st = NULL;
	string res;
	for (int i = s.length() - 1; i >= 0; i--) {
		if (isdigit(s[i])) {
			res += s[i];
		}
		else if (empty(st) || prior(s[i]) > prior(top(st)) || s[i] == ')') {
			push(st, s[i]);
		}
		else if (s[i] == '(') {
			while (top(st) != ')') {
				res += top(st);
				pop(st);
			}
			pop(st);
		}
		else if (prior(s[i]) <= prior(top(st))) {
			while (!empty(st) && prior(s[i]) <= prior(top(st))) {
				res += top(st);
				pop(st);
			}
			push(st, s[i]);
		}
	}
	while (!empty(st)) {
		res += top(st);
		pop(st);
	}
	reverse(res.begin(), res.end());
	cout << res << endl;
	system("pause");
	return 0;
}
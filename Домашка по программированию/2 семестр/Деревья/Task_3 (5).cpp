//#include <iostream>
//#include <cmath>
//#include <queue>
//
//using namespace std;
//
//struct tree {
//	int inf;
//	tree *right;
//	tree *left;
//};
//
//tree *node(int x) { // создание узла
//	tree *n = new tree;
//	n->inf = x;
//	n->left = NULL;
//	n->right = NULL;
//	return n;
//}
//
//void create(tree *&tr, int n) { // построение идеально сбалансированного
//	int x;
//	if (n > 0) {
//		cin >> x;
//		tr = node(x);
//		int nl = n / 2;
//		int nr = n - nl - 1;
//		create(tr->left, nl);
//		create(tr->right, nr);
//	}
//}
//
//int lefth(tree *tr) {
//	int k = 0;
//	tree *x = tr;
//	while (x) {
//		k++;
//		x = x->left;
//	}
//	return k - 1;
//}
//
//int righth(tree *tr) {
//	int k = 0;
//	tree *x = tr;
//	while (x) {
//		k++;
//		x = x->right;
//	}
//	return k - 1;
//}
//
////void add(tree *&tr, int x) {
////	tree *n = node(x);
////	if (tr == NULL) {
////		tr = n;
////		return;
////	}
////	tree *y = tr;
////	if (lefth(tr) == righth(tr)) {
////		do {
////			y = y->left;
////		} while (y->left);
////
////		if (!y->left) {
////			y->left = n;
////		}
////		else {
////			y->right = n;
////		}
////	}
////	else {
////		do {
////			y = y->right;
////		} while (y->right);
////
////		if (!y->left) {
////			y->left = n;
////		}
////		else {
////			y->right = n;
////		}
////	}
////}
//
//int count_leaf(tree * tr) { // подсчёт листьев
//	if (tr == NULL) {
//		return 0;
//	}
//	if (tr->left == NULL && tr->right == NULL) {
//		return 1;
//	}
//	else {
//		return count_leaf(tr->left) + count_leaf(tr->right);
//	}
//}
//
//void print_tree(tree *tr, int level = 0)
//{ // вывод дерева в виде дерева
//	if (tr != NULL)
//	{
//		print_tree(tr->right, level + 1);
//		for (int i = 0; i < level; i++) cout << "  ";
//		cout << tr->inf << endl;
//		print_tree(tr->left, level + 1);
//	}
//}
//
//void preorder(tree *tr) {// прямой
//	if (tr) {
//		cout << tr->inf;
//		preorder(tr->left);
//		preorder(tr->right);
//	}
//}
//
//int main() {
//	tree *tr = NULL;
//	int n; cin >> n;
//	create(tr, n);
//	/*print_tree(tr);*/
//	preorder(tr);
//	cout << endl;
//	cout << count_leaf(tr);
//	system("pause");
//	return 0;
//}

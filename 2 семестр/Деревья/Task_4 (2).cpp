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
//tree *node(int x) {
//	tree *n = new tree;
//	n->inf = x;
//	n->left = NULL;
//	n->right = NULL;
//	return n;
//}
//
//void create(tree *&tr, int n) {
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
//void BFS_print(tree *tr, int k) { // распечатка дерева по уровням через BFS
//	if (!tr) {
//		cout << "Empty tree" << endl;
//	}
//	else {
//		queue<tree*> cur, next;
//		tree *r = tr;
//		cur.push(r);
//		int j = 0;
//		while (cur.size()) {
//			if (j == 0) {
//				for (int i = 0; i < (int)pow(2.0, k) - 1; i++) {
//					cout << " ";
//				}
//			}
//			tree *buf = cur.front();
//			cur.pop();
//			j++;
//			if (buf) {
//				cout << buf->inf;
//				next.push(buf->left);
//				next.push(buf->right);
//				for (int i = 0; i < (int)pow(2.0, k + 1) - 1; i++) {
//					cout << " ";
//				}
//			}
//			if (!buf) {
//				for (int i = 0; i < (int)pow(2.0, k + 1) - 1; i++) {
//					cout << " ";
//				}
//				cout << " ";
//			}
//			if (cur.empty()) {
//				cout << endl;
//				swap(cur, next);
//				j = 0;
//				k--;
//			}
//		}
//	}
//}
//int main() {
//	tree *tr = NULL;
//	int n; cin >> n;
//	create(tr, n);
//	/*print_tree(tr);*/
//	int k = (int) (log((double)n) / log(2.0));
//	BFS_print(tr, k);
//	system("pause");
//	return 0;
//}

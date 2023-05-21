//#include <iostream>
//
//using namespace std;
//
//struct tree {
//	int inf;
//	tree *left;
//	tree *right;
//	tree *parent;
//};
//
//tree *node(int a) { // �������� ����
//	tree *n = new tree;
//	n->inf = a;
//	n->left = NULL;
//	n->right = NULL;
//	n->parent= NULL;
//	return n;
//}
//
//void insert(tree *&tr, int a) { // �������
//	tree *n = node(a);
//	if (!tr) { //���� ������ ������
//		tr = n;
//	}
//	else {
//		tree *y = tr;
//		while (y) { // ���� ���� ���������
//			if (n->inf > y->inf) { // ������ �����
//				if (y->right) {
//					y = y->right;
//				}
//				else { //���� ���������� ������ ��������
//					n->parent = y;
//					y->right = n;
//					break;
//				}
//			}
//			else if (n->inf < y->inf) { //����� �����
//				if (y->left) {
//					y = y->left;
//				}
//				else { // ���� ���������� ����� ��������
//					n->parent = y;
//					y->left = n;
//					break;
//				}
//			}
//		}
//	}
//}
//
//tree *find(tree *tr, int x) { // �����
//	if (!tr || x == tr->inf) { // ����� ��� ������ ��� ����� �� ����� �����
//		return tr;
//	}
//	if (x < tr->inf) { // ���� �� ����� �����
//		return find(tr->left, x);
//	}
//	else { // ���� �� ������ �����
//		return find(tr->right, x);
//	}
//}
//
//tree *min(tree *tr) { // ����� ������������
//	if (!tr->left) { // ���� ��� ������ ������
//		return tr;
//	}
//	else {
//		return min(tr->left);
//	}
//}
//
//tree *next(tree *tr, int x) { // ����� ����������
//	tree *n = find(tr, x);
//	if (n->right) { // ���� ���� ������ ������
//		return min(n->right);
//	}
//	tree *y = n->parent; // ��������
//	while (y && n == y->right) { //���� �� ����� �� ����� ��� ���� - ������ �������
//		n = y; // ��� � ���� �� ������
//		y = y->parent;
//	}
//	return y; // ���������� ��������
//}
//void Delete(tree *&tr, tree *v) { // �������� ����
//	tree *p = v->parent;
//	if (!p) { // ������ ������� �� ������ ����
//		tr = NULL;
//	}
//	else if (!v->left && !v->right) { // ���� ��� �����
//		if (p->left == v) { // ���� �����
//			p->left = NULL;
//		}
//		if (p->right == v) { // ���� ������
//			p->right = NULL;
//		}
//		delete v;
//	}
//	else if (!v->left || !v->right) { // ���� ���� ������
//		if (!p) {  //���� ������� ������, � �������� 1 �������
//			if (!v->left) { //���� ���� ������ �������
//				tr = v->right; //�� ���������� ������
//				v->parent = NULL;
//			}
//			else { // ��� ������
//				tr = v->left;
//				v->parent = NULL;
//			}
//		}
//		else {
//			if (!v->left) { // ���� ���� ������ ������
//				if (p->left == v) { 
//					p->left = v->right;
//				}
//				else {
//					p->right = v->right;
//				}
//				v->right->parent = p;
//			}
//			else { // ��� ������ ������
//				if (p->left == v) {
//					p->left = v->left;
//				}
//				else {
//					p->right = v->left;
//				}
//				v->left->parent = p;
//			}
//			delete v;
//		}
//	}
//	else { // ���� ��� ������
//		tree *succ = next(tr, v->inf);
//		v->inf = succ->inf;
//		if (succ->parent->left == succ) { //���� succ ����� �������
//			succ->parent->left = succ->right;
//			if (succ->right) { //���� ���� ������� ����������
//				succ->right->parent = succ->parent;
//			}
//		}
//		else { //���������� ���� succ - ������ �������
//			succ->parent->right = succ->right;
//			if (succ->right) {
//				succ->right->parent = succ->parent;
//			}
//		}
//		delete succ;
//	}
//}
//
//void postorder_delete(tree *&root, tree *tr, int r) { // �������� ����� � ���������
//	if (tr) {
//		postorder_delete(root, tr->left, r);
//		postorder_delete(root, tr->right, r);
//		if (tr->inf % r == 0) {
//			Delete(root, tr);
//		}
//	}
//}
//
//void inorder(tree *tr) { // ������������ ����� � �����
//	if (tr) {
//		inorder(tr->left);
//		cout << tr->inf << " ";
//		inorder(tr->right);
//	}
//}
//
//void print_tree(tree *tr, int level = 0)
//{ // ����� ������ � ���� ������
//	if (tr != NULL)
//	{
//		print_tree(tr->right, level + 1);
//		for (int i = 0; i < level; i++) cout << "  ";
//		cout << tr->inf << endl;
//		print_tree(tr->left, level + 1);
//	}
//}
//
//int main() {
//	tree *tr = NULL; // ������ ������
//	int n; cin >> n;
//	int x; cin >> x;
//	for (int i = 0; i < n; i++) { // ������ ������� ������
//		int k; cin >> k;
//		insert(tr, k);
//	}
//	/*print_tree(tr);
//	cout << endl;*/
//
//	inorder(tr);
//	cout << endl;
//
//	postorder_delete(tr, tr, x);
//
//	inorder(tr);
//
//	system("pause");
//	return 0;
//}
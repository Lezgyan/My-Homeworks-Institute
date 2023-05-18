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
//tree *node(int a) { // создания узла
//	tree *n = new tree;
//	n->inf = a;
//	n->left = NULL;
//	n->right = NULL;
//	n->parent= NULL;
//	return n;
//}
//
//void insert(tree *&tr, int a) { // вставка
//	tree *n = node(a);
//	if (!tr) { //если дерево пустое
//		tr = n;
//	}
//	else {
//		tree *y = tr;
//		while (y) { // ищем куда вставлять
//			if (n->inf > y->inf) { // правая ветка
//				if (y->right) {
//					y = y->right;
//				}
//				else { //узел становится правым ребенком
//					n->parent = y;
//					y->right = n;
//					break;
//				}
//			}
//			else if (n->inf < y->inf) { //левая ветка
//				if (y->left) {
//					y = y->left;
//				}
//				else { // узел становится левым ребенком
//					n->parent = y;
//					y->left = n;
//					break;
//				}
//			}
//		}
//	}
//}
//
//tree *find(tree *tr, int x) { // поиск
//	if (!tr || x == tr->inf) { // нашли что искали или дошли до конца ветки
//		return tr;
//	}
//	if (x < tr->inf) { // ищем по левой ветке
//		return find(tr->left, x);
//	}
//	else { // ищем по правой ветке
//		return find(tr->right, x);
//	}
//}
//
//tree *min(tree *tr) { // поиск минимального
//	if (!tr->left) { // если нет левого ребёнка
//		return tr;
//	}
//	else {
//		return min(tr->left);
//	}
//}
//
//tree *next(tree *tr, int x) { // поиск следующего
//	tree *n = find(tr, x);
//	if (n->right) { // если есть правый ребёнок
//		return min(n->right);
//	}
//	tree *y = n->parent; // родитель
//	while (y && n == y->right) { //пока не дошли до корня или узел - правый ребенок
//		n = y; // идём в верх по дереву
//		y = y->parent;
//	}
//	return y; // возвращаем родителя
//}
//void Delete(tree *&tr, tree *v) { // удаление узла
//	tree *p = v->parent;
//	if (!p) { // дерево состоит из одного узла
//		tr = NULL;
//	}
//	else if (!v->left && !v->right) { // если нет детей
//		if (p->left == v) { // если левый
//			p->left = NULL;
//		}
//		if (p->right == v) { // если правый
//			p->right = NULL;
//		}
//		delete v;
//	}
//	else if (!v->left || !v->right) { // если один ребёнок
//		if (!p) {  //если удаляем корень, у которого 1 ребенок
//			if (!v->left) { //если есть правый ребенок
//				tr = v->right; //он становится корнем
//				v->parent = NULL;
//			}
//			else { // для левого
//				tr = v->left;
//				v->parent = NULL;
//			}
//		}
//		else {
//			if (!v->left) { // если есть правый ребёнок
//				if (p->left == v) { 
//					p->left = v->right;
//				}
//				else {
//					p->right = v->right;
//				}
//				v->right->parent = p;
//			}
//			else { // для левого ребёнка
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
//	else { // есть оба ребёнка
//		tree *succ = next(tr, v->inf);
//		v->inf = succ->inf;
//		if (succ->parent->left == succ) { //если succ левый ребенок
//			succ->parent->left = succ->right;
//			if (succ->right) { //если этот ребенок существует
//				succ->right->parent = succ->parent;
//			}
//		}
//		else { //аналогично если succ - правый ребенок
//			succ->parent->right = succ->right;
//			if (succ->right) {
//				succ->right->parent = succ->parent;
//			}
//		}
//		delete succ;
//	}
//}
//
//void postorder_delete(tree *&root, tree *tr, int r) { // обратный обход с удалением
//	if (tr) {
//		postorder_delete(root, tr->left, r);
//		postorder_delete(root, tr->right, r);
//		if (tr->inf % r == 0) {
//			Delete(root, tr);
//		}
//	}
//}
//
//void inorder(tree *tr) { // симметричный обход и вывод
//	if (tr) {
//		inorder(tr->left);
//		cout << tr->inf << " ";
//		inorder(tr->right);
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
//int main() {
//	tree *tr = NULL; // создаём корень
//	int n; cin >> n;
//	int x; cin >> x;
//	for (int i = 0; i < n; i++) { // создаём вершины дерева
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
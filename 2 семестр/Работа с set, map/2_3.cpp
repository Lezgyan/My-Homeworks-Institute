//#include <iostream>
//#include <set>
//using namespace std;
//
//set<int> numb(int x) { // ��������� ����� �� �����
//	set<int> f;
//	while (x > 0) {
//		f.insert(x % 10);
//		x = x / 10;
//	}
//	return f;
//}
//
//int main() {
//	set<int> seta, bad, all;
//	int n; cin >> n;
//	for (int i = 0; i < n; i++) { // ����������
//		int k; cin >> k;
//		seta.insert(k);
//	}
//
//	for (auto i : seta) {
//		set<int> tr = numb(i);
//		if (i >= 10 && i <= 999) { // �������� �� ���- � ������������
//			bad.insert(tr.begin(), tr.end());
//		}
//		all.insert(tr.begin(), tr.end());
//	}
//
//	cout << "all: ";
//	for (auto i : all) { // ����� ���� ����
//		cout << i << " ";
//	}
//	cout << endl;
//	cout << "bad: ";
//	for (auto i : bad) { // ����� "������" ����
//		cout << i << " ";
//	}
//	cout << endl;
//	cout << "answer: ";
//	for (auto i : all) { // ����� ������
//		if (bad.find(i) == bad.end()) {
//			cout << i << " ";
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
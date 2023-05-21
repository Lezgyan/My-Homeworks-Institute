//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct point {
//	double x, y;
//};
//
//vector<point> read(int n) {
//	vector<point> arr(n);
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i].x >> arr[i].y;
//	}
//	return arr;
//}
//
//bool fr(point a, point b, point c) {
//	double eps = 0.0000000001;
//	double res = (c.x - a.x)*(b.y - a.y) - (b.x - a.x)*(c.y - a.y);
//	if (abs(res) <= eps) {
//		return true;
//	}
//	return false;
//}
//
//int kol(vector<point> arr) {
//	int cnt_max = -1;
//	for (int i = 0; i < arr.size(); i++) {
//		for (int j = 0; j < arr.size(); j++) {
//			int cnt = 2;
//			for (int k = 0; k < arr.size(); k++) {
//				if (i != j && j != k && i != k) {
//					if (fr(arr[i], arr[j], arr[k])) {
//						cnt++;
//					}
//				}
//			}
//			if (cnt > cnt_max) {
//				cnt_max = cnt;
//			}
//		}
//	}
//	return cnt_max;
//}
//
//int main() {
//	int n; cin >> n;
//	vector<point> arr = read(n);
//	cout << kol(arr) << endl;
//	system("pause");
//	return 0;
//}
#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

vector<int> move_x = { -2, -2, -1, -1, 1, 1, 2, 2 };
vector<int> move_y = { -1, 1, -2, 2, -2, 2, -1, 1 };

bool flag(int n) {
	return n >= 0 && n < 8;
}

vector<set<int>> matrix() {
	vector<set<int>> ans(64);
	int d = 0;
	for (int i = 7; i >= 0; i--) {
		for (int j = 0; j < 8; j++) {
			for (int k = 0; k < move_x.size(); k++) {
				if (flag(j + move_x[k]) && flag(7 - i + move_y[k])) {
					int t = 8*(7 - i + move_y[k]) + j + move_x[k];
					ans[d].insert(t);
					ans[t].insert(d);
				}
			}
			d++;
		}
	}
	return ans;
}

vector<int> BFS(vector<set<int>> &matrix, int from, int to) {
	vector<int> dist(64, 64);
	vector<int> p(64, -1);
	dist[from] = 0;
	queue<int> q;
	q.push(from);
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (auto i : matrix[v]) {
			if (dist[i] > dist[v] + 1) {
				p[i] = v;
				dist[i] = dist[v] + 1;
				q.push(i);
			}
		}
	}
	if (dist[to] == 64) {
		return {};
	}

	vector<int> path;
	while (to != -1) {
		path.push_back(to);
		to = p[to];
	}
	reverse(path.begin(), path.end());
	return path;
}

string decoder(int n) {
	int t = n / 8;
	char p = n - 8*t;
	string ans;
	ans += 'A' + p;
	return ans + to_string(t + 1);
}
int main() {
	string start, finish; cin >> start >> finish;
	int st = 8 * (atoi(&start[1]) - 1) + start[0] - 'A';
	int fn = 8 * (atoi(&finish[1]) - 1) + finish[0] - 'A';
	vector<set<int>> arr = matrix();
	vector<int> add = BFS(arr, st, fn);

	for (auto i : add) {
		cout << decoder(i) << " ";
	}

	system("pause");
	return 0;
}

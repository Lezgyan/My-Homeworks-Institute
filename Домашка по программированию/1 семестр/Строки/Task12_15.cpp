#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	ifstream input("TASK.txt");
	ofstream output("Answer.txt");
	string s;
	while (input.peek() != EOF) {
		getline(input, s);
		int k_1 = s.find('-');
		int k_2 = s.rfind('-');
		string t_1, t_2;
		for (int i = k_1; i < k_2; i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				t_1 = s.substr(i, 2);
				t_2 = s.substr(i + 3, 2);
				break;
			}
		}
		string t_3, t_4;
		for (int i = k_2; i < s.size(); i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				t_3 = s.substr(i, 2);
				t_4 = s.substr(i + 3, 2);
				break;
			}
		}
		int time_go = stoi(t_1) * 60 + stoi(t_2);
		int time_of = stoi(t_3)*60 + stoi(t_4);
		int suma = (time_go + time_of) % (60 * 24);
		if (suma >= (12*60) && suma <= (15 * 60)) {
			output << s << endl;
		}
	}
	return 0;
}
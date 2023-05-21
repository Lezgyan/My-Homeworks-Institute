//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Train {
//	int number;
//	int hour_go;
//	int minuts_go;
//	int hour_end;
//	int minuts_end;
//};
//
//Train STR_Train(string s) {
//	Train new_train;
//	int r = s.find('-');
//	int k = s.rfind('-');
//	string number = s.substr(0, r - 1);
//	new_train.number = stoi(number);
//	string hour_go = s.substr(r + 2, 2);
//	new_train.hour_go = stoi(hour_go);
//	string minuts_go = s.substr(r + 5, 2);
//	new_train.minuts_go = stoi(minuts_go);
//	string hour_end = s.substr(k + 2, 2);
//	new_train.hour_end = stoi(hour_end);
//	string minuts_end = s.substr(k + 5, 2);
//	new_train.minuts_end = stoi(minuts_end);
//	return new_train;
//}
//
//bool correct_hour(int p) {
//	if (p >= 0 && p < 24) {
//		return true;
//	}
//	return false;
//}
//
//bool correct_minuts(int p) {
//	if (p >= 0 && p < 60) {
//		return true;
//	}
//	return false;
//}
//
//bool correct_train(Train p){
//	return correct_hour(p.hour_go) && correct_minuts(p.minuts_go)
//		&& correct_minuts(p.minuts_end);
//}
//
//void answer(Train train) {
//	int time_go = train.hour_go * 60 + train.minuts_go;
//	int time_of = train.hour_end * 60 + train.minuts_end;
//	int suma = (time_go + time_of) % (60 * 24);
//	int f = suma / 60;
//	int t = suma - f * 60;
//	if (t == 0) {
//		cout << train.number << " " << f << ":" << t << '0';
//	}
//	else {
//		cout << train.number << " " << f << ":" << t;
//	}
//}
//int main() {
//	string s;
//	getline(cin, s);
//	Train train = STR_Train(s);
//	if (correct_train(train)) {
//		answer(train);
//	}
//	system("pause");
//	return 0;
//}
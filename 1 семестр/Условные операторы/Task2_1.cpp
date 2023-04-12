//#include <iostream>
//#include <cmath>
//using namespace std;
//int main(){
//	int A, X, Y; // входные данные
//	cin >> A >> X >> Y;
//	// проверка входных условий
//	if ((A >= 100 && A < 1000) && (X > 0 && X < 10) && (Y > 0 && Y < 10)) {
//		int numb_1 = A / 100; // кол-во сотен
//		int numb_2 = (A % 100) / 10; //кол-во десятков
//		int numb_3 = A % 10; // кол-во единиц
//		int SUM = numb_1 + numb_2 + numb_3;
//		if ((SUM % X == 0) && (SUM % Y == 0)) { // проверка по первому условию
//			// уменьшить все его цифры на 5 (по модулю)
//			int answer = abs(numb_1 - 5) * 100 + abs(numb_2 - 5) * 10 + abs(numb_3 - 5);
//			cout << answer;
//		}
//		if ((SUM % X == 0) && (SUM % Y != 0)) { // проверка по второму условию
//			// увеличить все его цифры в два раза (по модулю 10)
//			int answer = ((numb_1 * 2) % 10) * 100 + ((numb_2 * 2) % 10) * 10 + ((numb_3 * 2) % 10);
//			cout << answer;
//		}
//		if ((SUM % X != 0) && (SUM % Y == 0)) { // проверка по третьему условию
//			// увеличить все его цифры на 1 (по модулю 10)
//			int answer = ((numb_1 + 1) % 10) * 100 + ((numb_2 + 1) % 10) * 10 + ((numb_3 + 1) % 10);
//			cout << answer;
//		}
//		if ((SUM % X != 0) && (SUM % Y != 0)) { // проверка по четвёртому условию
//			// уменьшить все его цифры на 1 (по модулю)
//			int answer = abs(numb_1 - 1) * 100 + abs(numb_2 - 1) * 10 + abs(numb_3 - 1);
//			cout << answer;
//		}
//	}
//	else {
//		cout << "incorrect input";
//	}
//	system("pause");
//	return 0;
//}
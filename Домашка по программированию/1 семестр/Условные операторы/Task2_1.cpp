//#include <iostream>
//#include <cmath>
//using namespace std;
//int main(){
//	int A, X, Y; // ������� ������
//	cin >> A >> X >> Y;
//	// �������� ������� �������
//	if ((A >= 100 && A < 1000) && (X > 0 && X < 10) && (Y > 0 && Y < 10)) {
//		int numb_1 = A / 100; // ���-�� �����
//		int numb_2 = (A % 100) / 10; //���-�� ��������
//		int numb_3 = A % 10; // ���-�� ������
//		int SUM = numb_1 + numb_2 + numb_3;
//		if ((SUM % X == 0) && (SUM % Y == 0)) { // �������� �� ������� �������
//			// ��������� ��� ��� ����� �� 5 (�� ������)
//			int answer = abs(numb_1 - 5) * 100 + abs(numb_2 - 5) * 10 + abs(numb_3 - 5);
//			cout << answer;
//		}
//		if ((SUM % X == 0) && (SUM % Y != 0)) { // �������� �� ������� �������
//			// ��������� ��� ��� ����� � ��� ���� (�� ������ 10)
//			int answer = ((numb_1 * 2) % 10) * 100 + ((numb_2 * 2) % 10) * 10 + ((numb_3 * 2) % 10);
//			cout << answer;
//		}
//		if ((SUM % X != 0) && (SUM % Y == 0)) { // �������� �� �������� �������
//			// ��������� ��� ��� ����� �� 1 (�� ������ 10)
//			int answer = ((numb_1 + 1) % 10) * 100 + ((numb_2 + 1) % 10) * 10 + ((numb_3 + 1) % 10);
//			cout << answer;
//		}
//		if ((SUM % X != 0) && (SUM % Y != 0)) { // �������� �� ��������� �������
//			// ��������� ��� ��� ����� �� 1 (�� ������)
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
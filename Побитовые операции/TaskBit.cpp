//#include<iostream>
//using namespace std;
//int main() {
//	long long i;
//	cin >> i;
//	long long x = 1 << i; // сдвиг 1 на i бит (например, i = 2 => x = 100 = 4)
//	cout << x << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	long long i, n;
//	cin >> i >> n;
//	long long x = 1 << i; //сдвиг 1 на i бит
//	long long res = x | n; // n = 11, i = 2 => 15 = 1011; 1 << 2 = 100 => 1011 | 100 = 1111 = 15
//	cout << res << endl;
//	system("pause");
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main() {
//	long long i, n;
//	cin >> n >> i;
//	long long x = ~n; // n = 11 = 1011; i = 1 => x = 0100 
//	long long y = 1 << i; // y = 10
//	long long res = ~(x | y); // 0100 | 10 = 0110 => res = 1001 = 9
//	cout << res << endl;
//	system("pause");
//	return 0;
//}




//#include<iostream>
//using namespace std;
//int main() {
//	long long n, i;
//	cin >> n >> i; // n = 11 = 1011
//	long long x = 1 << i; i = 1
//	long long res = n ^ x; 1011 ^ 10 = 1001
//	cout << res << endl;
//	system("pause");
//	return 0;
//}





//#include<iostream>
//using namespace std;
//int main() {
//	long long n;// n = 1011 = 11
//	cin >> n;
//	int x = 1;
//	if ((n ^ x) > n) { // 1011 ^ 1 = 1010 < n
//		cout << "Even number" << endl; // чётное число
//	}
//	else {
//		cout << "Odd number" << endl; // нечётное число
//	}
//	system("pause");
//	return 0;
//}
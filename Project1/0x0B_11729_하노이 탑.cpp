//#include <bits/stdc++.h>
//using namespace std;
//int n;
//
//void hanoi(int a, int b, int n) {
//	if (n == 1) {
//		cout << a << ' ' << b << '\n';
//		return;
//	}
//
//	hanoi(a, 6 - a - b, n-1);
//	cout << a << ' ' << b << '\n';
//	hanoi(6 - a - b, b, n - 1);
//}
//
//int main() {
//	cin >> n;
//	cout << (1 << n) - 1 << '\n';
//	hanoi(1, 3, n);
//
//	return 0;
//}
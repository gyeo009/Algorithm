//#include <bits/stdc++.h>
//using namespace std;
//long long a, b, m;
//long long res = 1;
//
//long long power(long long a, long long b, long long m) {
//	if (b == 1) return a%m; // a가 m보다 클 수 있어 a대신 a%m 반환, base condition
//	res = power(a, b / 2, m);
//	res = res * res % m;
//	if (b % 2 == 0) return res;
//	return res * a % m;
//}
//
//int sum(int n) {
//	if (n == 1) return 1;
//
//
//	int tmp = sum(n - 1);
//	return n + tmp;
//}
//
//
//long long power(long long a, long long b, long long m) {
//	if (b == 1) return a % m;
//
//	long long val = power(a, b / 2, m);
//	
//	if (b % 2 == 0) return val * val % m;
//	return val * val * a % m;
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> a >> b >> m;
//	cout << power(a, b, m);
//
//	return 0;
//}
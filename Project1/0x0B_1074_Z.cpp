//#include <bits/stdc++.h>
//using namespace std;
//int N, r, c;
//
//int Z(int n, int r, int c) {
//	if (n == 0) return 0;
//
//	int half = 1<<(n-1);
//	if (r < half&& c < half) { // ����� �������� 2��и�
//		return Z(n - 1, r, c);
//	}
//	
//	else if(r < half && c >= half)	return half*half + Z(n - 1, r, c- half);		// 1��и�
//	else if(r >= half && c < half) return half * half * 2 + Z(n - 1, r-half, c);			// 3��и�
//	else if (r >= half && c >= half) return half * half * 3 + Z(n - 1, r-half, c-half);			// 4��и�
//}
//
//
//int main() {
//	cin >> N >> r >> c;
//	cout << Z(N, r, c);
//	return 0;
//}
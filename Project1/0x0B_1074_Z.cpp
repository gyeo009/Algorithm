//#include <bits/stdc++.h>
//using namespace std;
//int N, r, c;
//
//int Z(int n, int r, int c) {
//	if (n == 0) return 0;
//
//	int half = 1<<(n-1);
//	if (r < half&& c < half) { // 정가운데 원점기준 2사분면
//		return Z(n - 1, r, c);
//	}
//	
//	else if(r < half && c >= half)	return half*half + Z(n - 1, r, c- half);		// 1사분면
//	else if(r >= half && c < half) return half * half * 2 + Z(n - 1, r-half, c);			// 3사분면
//	else if (r >= half && c >= half) return half * half * 3 + Z(n - 1, r-half, c-half);			// 4사분면
//}
//
//
//int main() {
//	cin >> N >> r >> c;
//	cout << Z(N, r, c);
//	return 0;
//}
#include <bits/stdc++.h>
using namespace std;
int N, r, c;

int Z(int N, int r, int c) {
	if (N == 0) return 0;
	int half = 1 << (N - 1); // 2의 거듭제곱 표현은 이렇게 비트연산으로
	if (r < half && c < half) return Z(N - 1, r, c);
	else if (r < half && c >= half) return half* half + Z(N - 1, r, c - half);
	else if (r >= half && c <half) return 2 * half * half + Z(N - 1, r - half, c);
	return 3 * half * half + Z(N - 1, r - half, c - half);
}

int main() {
	cin >> N >> r >> c;
	cout << Z(N, r, c);
	return 0;
}
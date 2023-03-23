//#include <bits/stdc++.h>
//using namespace std;
//
//int N, cnt =0;
//bool isUsed1[30]; // 같은 열에 있는지 확인, index가 해당 열을 의미
//bool isUsed2[30]; // 왼쪽 아래로 향하는 같은 대각선 상에 있는지 확인, index는 n-1 + x-y를 의미, n-1은 인덱스 양수보정
//bool isUsed3[30]; // 오른쪽 위로 향하는 같은 대각선 상에 있는지 확인, index는 x+y
//
//void Queen(int cur) {
//	if (cur == N) { // base condition
//		cnt++; 
//		return;
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (isUsed1[i] || isUsed2[N - 1 + cur - i] || isUsed3[cur + i]) continue;
//		isUsed1[i] = true;
//		isUsed2[N - 1 + cur - i] = true;
//		isUsed3[cur + i] = true;
//		Queen(cur + 1);
//		isUsed1[i] = false;
//		isUsed2[N - 1 + cur - i] = false;
//		isUsed3[cur + i] = false;
//	}
//
//
//}
//
//
//int main() {
//	cin >> N;
//	Queen(0);
//	cout << cnt;
//
//
//	return 0;
//}
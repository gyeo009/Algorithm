//#include <bits/stdc++.h>
//using namespace std;
//
//int N, cnt =0;
//bool isUsed1[30]; // ���� ���� �ִ��� Ȯ��, index�� �ش� ���� �ǹ�
//bool isUsed2[30]; // ���� �Ʒ��� ���ϴ� ���� �밢�� �� �ִ��� Ȯ��, index�� n-1 + x-y�� �ǹ�, n-1�� �ε��� �������
//bool isUsed3[30]; // ������ ���� ���ϴ� ���� �밢�� �� �ִ��� Ȯ��, index�� x+y
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
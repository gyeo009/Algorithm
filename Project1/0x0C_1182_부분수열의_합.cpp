//#include <bits/stdc++.h>
//using namespace std;
//int arr[20];
//int cnt = 0;
//int N, S;
//
//// ���°���Ʈ���� ����ٰ� ���� ��, �� level�� �� ���� ������ �ȴ������� �ǹ̸� �����ٰ� �����ϸ�, N�� �������� �ٴٶ��� �� ���ϰ� �ȴ��Ѱ͵��� ������ ������ ������ cur == N�� basecondition�� �ȴ�.
//void func(int cur, int sum) {
//	if (cur == N) { // base condition
//		if (sum == S) cnt++;
//		return;
//	}
//	
//	func(cur + 1, sum);
//	func(cur + 1, sum + arr[cur]);
//}
//
//int main() {
//	cin >> N >> S;
//	for (int i = 0; i < N; i++) cin >> arr[i];
//
//	func(0, 0);
//	if (S == 0) cnt--; // ������ ����
//	cout << cnt;
//	return 0;
//}
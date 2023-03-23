//#include <bits/stdc++.h>
//using namespace std;
//int arr[20];
//int cnt = 0;
//int N, S;
//
//// 상태공간트리를 만든다고 생각 후, 각 level이 각 수를 더할지 안더할지의 의미를 가진다고 생각하면, N이 마지막에 다다랐을 때 더하고 안더한것들의 조합이 나오기 때문에 cur == N이 basecondition이 된다.
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
//	if (S == 0) cnt--; // 공집합 제외
//	cout << cnt;
//	return 0;
//}
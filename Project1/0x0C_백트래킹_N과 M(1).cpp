//#include <bits/stdc++.h>
//using namespace std;
//int n, m;
//int seq[10];
//bool isused[10];
//
//void nm(int k) {
//	if (k == m) {
//		for (int i = 0; i < m; i++) {
//			cout << seq[i] << ' ';
//		}
//		cout << '\n';
//		return;
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (!isused[i]) {
//			seq[k] = i;
//			isused[i] = true;
//			nm(k+1);
//			isused[i] = false;
//		}
//	}
//
//}
//int main() {
//	cin >> n >> m;
//	nm(0);
//
//	return 0;
//}
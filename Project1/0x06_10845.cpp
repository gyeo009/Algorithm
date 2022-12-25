//#include <bits/stdc++.h>
//using namespace std;
//queue<int> q;
//
//int main(void) {
//	cin.tie(0);
//	int n; cin >> n;
//	string a; int b;
//	while (n--) {
//		cin >> a;
//		if (a == "push") {
//			cin >> b;
//			q.push(b);
//		}
//		else if (a == "pop") {
//			if (!q.empty()) {
//				cout << q.front() << '\n';
//				q.pop();
//			}
//			else cout << -1 << '\n';
//		}
//		else if (a == "size") {
//			cout << q.size() << '\n';
//		}
//		else if (a == "empty") {
//			if (q.empty()) cout << 1 << '\n';
//			else cout << 0 << '\n';
//		}
//		else if (a == "front") {
//			if (!q.empty()) cout << q.front() << '\n';
//			else cout << -1 << '\n';
//		}
//		else if (a == "back") {
//			if (!q.empty()) cout << q.back() << '\n';
//			else cout << -1 << '\n';
//		}
//	}
//}
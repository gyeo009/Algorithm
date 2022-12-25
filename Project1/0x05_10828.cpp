//#include <bits/stdc++.h>
//using namespace std;
//stack<int> s;
//int main(void) {
//	int N;
//	string input;
//	int num;
//	cin >> N;
//	while (N--) {
//		cin >> input;
//		if (input == "push") {
//			cin >> num;
//			s.push(num);
//		}
//		else if (input == "top") {
//			if (s.empty()) cout << -1 << '\n';
//			else cout << s.top()<<'\n';
//		}
//		else if (input == "size") {
//			cout << s.size()<<'\n';
//		}
//		else if (input == "empty") {
//			if (s.empty()) cout << 1 << '\n';
//			else cout << 0 << '\n';
//		}
//		else if (input == "pop") {
//			if (s.empty()) cout << -1 << '\n';
//			else {
//				cout << s.top() << '\n';
//				s.pop();
//			}
//		}
//	}
//}
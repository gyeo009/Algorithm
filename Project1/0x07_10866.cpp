//#include <bits/stdc++.h>
//using namespace std;
//const int mx = 1000;
//int s[2 * mx + 1] = {};// 왜 mx가 상수여야 함??
//
//
//class deque_i_made {
//private:
//	int tail;
//	int head;
//public:
//	deque_i_made() {
//		tail = mx;
//		head = mx;
//	}
//	void push_front(int x) {
//		s[--head] = x;
//	}
//	void push_back(int x) {
//		s[tail++] = x;
//	}
//	void pop_front() {
//		head++;
//	}
//	void pop_back() {
//		tail--;
//	}
//	int front() {
//		return s[head];
//	}
//	int back() {
//		return s[tail - 1];
//	}
//	bool empty() {
//		if (tail == head) return true;
//		else return false;
//	}
//	int size() {
//		return tail - head;
//	}
//};
//
//int main(void) {
//	cin.tie(0);
//	int n; cin >> n;
//	string a; int b;
//	deque_i_made dq;
//	while (n--) {
//		cin >> a;
//		if (a == "push_back") {
//			cin >> b;
//			dq.push_back(b);
//		}
//		else if (a == "push_front") {
//			cin >> b;
//			dq.push_front(b);
//		}
//		else if (a == "pop_front") {
//			if (!dq.empty()) {
//				cout << dq.front() << '\n';
//				dq.pop_front();
//			}
//			else cout << -1 << '\n';
//		}
//		else if (a == "pop_back") {
//			if (!dq.empty()) {
//				cout << dq.back() << '\n';
//				dq.pop_back();
//			}
//			else cout << -1 << '\n';
//		}
//		else if (a == "size") {
//			cout << dq.size() << '\n';
//		}
//		else if (a == "empty") {
//			if (dq.empty()) cout << 1 << '\n';
//			else cout << 0 << '\n';
//		}
//		else if (a == "front") {
//			if (!dq.empty()) cout << dq.front() << '\n';
//			else cout << -1 << '\n';
//		}
//		else if (a == "back") {
//			if (!dq.empty()) cout << dq.back() << '\n';
//			else cout << -1 << '\n';
//		}
//	}
//}
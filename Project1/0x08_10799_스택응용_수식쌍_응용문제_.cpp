//#include <bits/stdc++.h>
//using namespace std;
//stack<char> st;
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	string s; cin >> s;
//	int n = 0;
//	int bracket_counter = 0;
//	char temp = 0;
//	int stick = 0;
//
//
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] == '(') {
//			st.push(s[i]);
//			stick++;
//			temp = 0;
//		}
//		else if (s[i] == ')') {
//			if (!st.empty()) {
//				if (st.top() == '(') {
//					if (temp == 0) {
//						bracket_counter++;
//						stick--;
//						n = n + stick;
//					}
//					else if (temp == st.top()) {
//						stick--;
//						n++; // 이거 한 줄만 추가하면 됐는데... 아... 어쨋든 sol ㅎ
//					}
//					temp = st.top();
//					st.pop();
//				}
//			}
//		}
//	}
//	cout << n << '\n';
//}
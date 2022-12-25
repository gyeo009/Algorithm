//#include <bits/stdc++.h>
//using namespace std;
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	string str;
//	while (true) {
//		stack<int> s;
//		bool tf = 1;
//		getline(cin, str);
//		if (str[0] == '.') break;
//		for (int i = 0; i < str.length(); i++) {
//			if (str[i] == '(') { // ||로 코드 길이 줄일 수 있음
//				s.push(str[i]);
//			}
//			if (str[i] == ')') {
//				if (!s.empty()) {
//					char a = s.top();
//					s.pop();
//					if ('(' != a) {
//						tf = 0;
//					}
//				}
//				else tf = 0;
//			}
//			if (str[i] == '[') {
//				s.push(str[i]);
//			}
//			if (str[i] == ']') {
//				if (!s.empty()) {
//					char a = s.top();
//					s.pop();
//					if ('[' != a) {
//						tf = 0;
//					}
//				}
//				else tf = 0;
//			}
//		}
//		if (s.empty() == 0) tf = 0;
//		if (tf == 1) cout << "yes" << '\n';
//		else cout << "no" << '\n';
//	}
//}
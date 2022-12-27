//#include <bits/stdc++.h>
//#include <cctype>
//using namespace std;
//stack<char> s;
//
//
//int main(void) {
//	// isdigit() 숫자라면 0이 아닌숫자 리턴, 숫자가 아니면 0리턴
//	// 왜자꾸 숫자여도 0 나오냐??
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	string st; cin >> st;
//	int sum = 0;
//	int pro = 1; // 곱셈 항등원
//	for (int i = 0; i < st.length(); i++) {
//		if (st[i] == '(') {
//			pro *= 2;
//			s.push(st[i]);
//		}
//		else if (st[i] == '[') {
//			pro *= 3;
//			s.push(st[i]);
//		}
//		else if (st[i] == ')') {
//			if (s.empty() || s.top() != '(') {
//				cout << 0;
//				return 0; // 바로 main함수 탈출
//			}
//			// 직전 괄호가 여는 괄호였을때 값 추가
//			if (st[i - 1] == '(') sum += pro;
//			s.pop();
//			pro /= 2; // 다시 곱할 값 초기화
//		}
//		else if (st[i] == ']') {
//			if (s.empty() || s.top() != '[') {
//				cout << 0;
//				return 0; // 바로 main함수 탈출
//			}
//			// 직전 괄호가 여는 괄호였을때 값 추가
//			if (st[i - 1] == '[') sum += pro;
//			s.pop();
//			pro /= 3; // 다시 곱할 값 초기화
//		}
//	}
//	if (s.empty()) cout << sum;
//	else cout << 0;
//	/*
//	반복문 내부 - 조건문 내부에서 최종 result들(sum, pro)에 계속 연산 해주기.
//	string indexing하면 여러 checker들은 쓸 필요가 없다.
//	다시말해 indexing 기억해라. checker 쓰면 쓸 수록 코드가 더러워짐
//	*/
//
//}
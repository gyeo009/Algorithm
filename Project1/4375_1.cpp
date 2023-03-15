//#include <bits/stdc++.h>
//#include <string>
//using namespace std;
//
//// 모듈러 연산 % : 나머지 구하는 연산자
//// A % C = R_1 이라면
//// A = C*Q_1 + R_1 이런 느낌, Q는 실수, 0 =< R < C
//// 모듈러 연산자는 나눗셈빼고 특유의 분배법칙이 성립한다.
//// 나눗셈은 곱셈의 역원으로 분배법칙을 쓴다.
//// (A + B) % C = (A % C + B % C) % C
//// (A - B) % C = (A % C - B % C) % C
//// (A * B) % C = (A % C * B % C) % C
//
//int main() {
//	short n;
//	while (cin >> n) { // EOF! 조건
//		int tmp = 0;
//		for (int i = 1; i <= n; i++) {
//			tmp = tmp * 10 + 1;
//			tmp %= n;
//			if (tmp == 0) {
//				cout << i << '\n';
//				break;
//			}
//		}
//	}
//	return 0;
//}
//
//// friend class 지정하면,
//// A class에서 B를 friend로 지정하면
//// B는 A꺼를 자유자재로 사용할 수 있따.
//// 단방향성임.
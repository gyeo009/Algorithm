//#include <bits/stdc++.h>
//#include <string>
//using namespace std;
//
//// ��ⷯ ���� % : ������ ���ϴ� ������
//// A % C = R_1 �̶��
//// A = C*Q_1 + R_1 �̷� ����, Q�� �Ǽ�, 0 =< R < C
//// ��ⷯ �����ڴ� ���������� Ư���� �й��Ģ�� �����Ѵ�.
//// �������� ������ �������� �й��Ģ�� ����.
//// (A + B) % C = (A % C + B % C) % C
//// (A - B) % C = (A % C - B % C) % C
//// (A * B) % C = (A % C * B % C) % C
//
//int main() {
//	short n;
//	while (cin >> n) { // EOF! ����
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
//// friend class �����ϸ�,
//// A class���� B�� friend�� �����ϸ�
//// B�� A���� ��������� ����� �� �ֵ�.
//// �ܹ��⼺��.
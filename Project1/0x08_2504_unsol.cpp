//#include <bits/stdc++.h>
//#include <cctype>
//using namespace std;
//stack<char> s;
//
//
//int main(void) {
//	// isdigit() ���ڶ�� 0�� �ƴѼ��� ����, ���ڰ� �ƴϸ� 0����
//	// ���ڲ� ���ڿ��� 0 ������??
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	string st; cin >> st;
//	int sum = 0;
//	int pro = 1; // ���� �׵��
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
//				return 0; // �ٷ� main�Լ� Ż��
//			}
//			// ���� ��ȣ�� ���� ��ȣ������ �� �߰�
//			if (st[i - 1] == '(') sum += pro;
//			s.pop();
//			pro /= 2; // �ٽ� ���� �� �ʱ�ȭ
//		}
//		else if (st[i] == ']') {
//			if (s.empty() || s.top() != '[') {
//				cout << 0;
//				return 0; // �ٷ� main�Լ� Ż��
//			}
//			// ���� ��ȣ�� ���� ��ȣ������ �� �߰�
//			if (st[i - 1] == '[') sum += pro;
//			s.pop();
//			pro /= 3; // �ٽ� ���� �� �ʱ�ȭ
//		}
//	}
//	if (s.empty()) cout << sum;
//	else cout << 0;
//	/*
//	�ݺ��� ���� - ���ǹ� ���ο��� ���� result��(sum, pro)�� ��� ���� ���ֱ�.
//	string indexing�ϸ� ���� checker���� �� �ʿ䰡 ����.
//	�ٽø��� indexing ����ض�. checker ���� �� ���� �ڵ尡 ��������
//	*/
//
//}
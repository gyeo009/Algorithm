//#include <bits/stdc++.h>
//using namespace std;
//
//
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	list<char> lst;
//	string s;
//	cin >> s;
//	for (auto c : s) lst.push_back(c);
//	auto cursor = lst.end();
//	int tc;
//	cin >> tc;
//	while (tc--) { // ���� ������ ���� �ȵ�!!
//		char op; // operator
//		cin >> op;
//		if (op == 'L') {
//			if (cursor != lst.begin())cursor--;
//		}
//		else if (op == 'D') {
//			if (cursor != lst.end())cursor++;
//		}
//		else if (op == 'B') {
//			if (cursor != lst.begin()) {
//				cursor--;
//				cursor = lst.erase(cursor);
//			}
//		}
//		else {
//			char add; cin >> add;
//			lst.insert(cursor, add);
//
//		}
//	}
//	for (auto c : lst) cout << c;
//	//list<int> L = { 1, 2 }; // 1 2
//	//list<int>::iterator t = L.begin(); // t�� ���� 1�� ����Ű�� �ִ�.
//	//L.push_front(10); // 10 1 2
//	//cout << *t << '\n'; // t�� ����Ű�� �� = 1�� ���
//	//L.push_back(5); // 10 1 2 5
//	//L.insert(t, 6); // t�� ����Ű�� �� �տ� ����, 10 6 1 2 5
//	//t++; // t�� ��ĭ ��, ���� t�� ����Ű�� ���� 2
//	//t = L.erase(t); // t�� ����Ű�� ���� ���� ��, �� ���� ������ 5�� ��ġ�� ��ȯ
//	//cout << *t << '\n'; // 5
//
//
//	//// �� �� for���� ������ �ڵ�
//	//for (auto i : L) cout << i << ' ';
//	//cout << '\n';
//	//for (list<int>::iterator iter = L.begin(); iter != L.end(); iter++)
//	//	cout << *iter << ' ';
//}
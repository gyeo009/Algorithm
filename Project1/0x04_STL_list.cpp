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
//	while (tc--) { // 전위 연산자 쓰면 안됨!!
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
//	//list<int>::iterator t = L.begin(); // t는 현재 1을 가리키고 있다.
//	//L.push_front(10); // 10 1 2
//	//cout << *t << '\n'; // t가 가리키는 값 = 1을 출력
//	//L.push_back(5); // 10 1 2 5
//	//L.insert(t, 6); // t가 가리키는 곳 앞에 삽입, 10 6 1 2 5
//	//t++; // t를 한칸 밈, 현재 t가 가리키는 곳은 2
//	//t = L.erase(t); // t가 가리키는 값을 제거 후, 그 다음 원소인 5의 위치를 반환
//	//cout << *t << '\n'; // 5
//
//
//	//// 이 두 for문은 동일한 코드
//	//for (auto i : L) cout << i << ' ';
//	//cout << '\n';
//	//for (list<int>::iterator iter = L.begin(); iter != L.end(); iter++)
//	//	cout << *iter << ' ';
//}
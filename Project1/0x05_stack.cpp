//#include <bits/stdc++.h>
//using namespace std;
//
//const int MX = 1000005;
//int dat[MX];
//int pos = 0;
//
//void push(int x) {
//	dat[pos++] = x; // 후위 연산자로 표현!
//}
//
//void pop() {
//	pos--;
//	//dat[pos] = 0; // 초기화 필요없음, 어차피 덮어 씌울거
//}
//
//int top() {
//	return dat[pos-1];
//}
//
//void test() {
//	push(5); push(4); push(3);
//	cout << top() << '\n'; // 3
//	pop(); pop();
//	cout << top() << '\n'; // 5
//	push(10); push(12);
//	cout << top() << '\n'; // 12
//	pop();
//	cout << top() << '\n'; // 10
//}
//
//
//
//int main(void) {
//	test();
//
//	// STL stack
//	stack<int> s;
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	cout << s.size() << '\n';
//	if (s.empty()) cout << "s is empty.\n";
//	else cout << "s is not empty.\n";
//	s.pop();
//	cout << s.top()<< '\n';
//	s.pop();
//	cout << s.top()<< '\n';
//	s.pop();
//	if (s.empty()) cout << "s is empty.\n";
//	else cout << "s is not empty.\n";
//	//cout << s.top() << '\n'; // runtime error 발생	
//}
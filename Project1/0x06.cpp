//#include <bits/stdc++.h>
//using namespace std;
//int q[1000] = {};
//
//class Queue {
//private:
//		int header;
//		int tailer;
//public:
//	Queue() {
//		header = 0;
//		tailer = 0;
//	};
//	void push(int x) {
//		q[tailer++] = x;
//	};
//	int pop() {
//		header++;
//		return q[header-1];
//	};
//	int tail() {
//		return q[tailer - 1];
//	};
//	int head()
//	{
//		return q[header];
//	};
//};
//
//int main(void) {
//	Queue q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	q.push(4);
//	q.push(5);
//	cout << q.pop() << '\n';
//	cout << q.pop() << '\n';
//	cout << q.pop() << '\n';
//	cout << q.pop() << '\n';
//	cout << q.pop() << '\n';
//
//}
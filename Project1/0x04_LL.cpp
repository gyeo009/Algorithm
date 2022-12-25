//#include <bits/stdc++.h>
//using namespace std;
//
//// 야매 연결리스트
//const int MX = 1000005;
//int dat[MX], pre[MX], nxt[MX];
//int unused = 1;
//
//// dat[i]: i번지 원소의 값
//// pre[i]: i번지 원소에 대한 이전 원소의 인덱스
//// nxt[i]: i번지 원소에 대한 다음 원소의 인덱스
//// idx 0은 dummy node로 둬야댐(원소가 아예 없는 경우 대비) 
//
//
//// 순차탐색(traverse)
//void traverse() {
//	int cur = nxt[0];
//	while (cur != -1) {
//		cout << dat[cur] << ' ';
//		cur = nxt[cur];
//	}
//	cout << "\n\n";
//}
//
//void insert(int addr, int num) {
//	if (nxt[0] == -1) {
//		dat[0] = -1;
//		dat[1] = num;
//		nxt[0] = 1;
//		pre[1] = 0;
//	}
//	else {
//		int cur = 0;
//		int cnt = 0;
//		// 다음부터 이런 counter는 global하게 설정하자...
//		while (cur != -1) {
//			cur = nxt[cur];
//			cnt++;
//		}
//		dat[cnt] = num;
//		nxt[cnt] = nxt[addr];
//		pre[cnt] = addr;
//		int temp = nxt[addr];
//		nxt[addr] = cnt;
//		pre[temp] = cnt;
//	}
//}
//void erase(int addr) {
//	pre[nxt[addr]] = pre[addr];
//	nxt[pre[addr]] = nxt[addr];
//	dat[addr] = -1;
//}
//void insert_test() {
//	cout << "****** insert_test *****\n";
//	insert(0, 10); // 10(address=1)
//	traverse();
//	insert(0, 30); // 30(address=2) 10
//	traverse();
//	insert(2, 40); // 30 40(address=3) 10
//	traverse();
//	insert(1, 20); // 30 40 10 20(address=4)
//	traverse();
//	insert(4, 70); // 30 40 10 20 70(address=5)
//	traverse();
//}
//void erase_test() {
//	cout << "****** erase_test *****\n";
//	erase(1); // 30 40 20 70
//	traverse();
//	erase(2); // 40 20 70
//	traverse();
//	erase(4); // 40 70
//	traverse();
//	erase(5); // 40
//	traverse();
//}
//
//int main() {
//	fill(pre, pre + MX, -1);
//	fill(nxt, nxt + MX, -1);
//	insert_test();
//	erase_test();
//
//	return 0;
//}
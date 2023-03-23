#include <bits/stdc++.h>
using namespace std;
int n, m, cnt = 0;
int board[8][8];

void rotate() { // 90도 회전

}
void _1(int x, int y) {
	for (int i = y; i < m; i++) {
		if (board[x][i] == 6) break;
		board[x][i] = 1;
		cnt++;
	}
}


int main() {
	cin >> n >> m;
	
	// board 0으로 초기화 해야되나?





	return 0;
}
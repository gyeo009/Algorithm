#include <bits/stdc++.h>
using namespace std;
int n, m, cnt = 0;
int board[8][8];

void rotate() { // 90�� ȸ��

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
	
	// board 0���� �ʱ�ȭ �ؾߵǳ�?





	return 0;
}
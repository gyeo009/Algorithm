//#include <bits/stdc++.h>
//using namespace std;
//int board[1000][1000];
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//int n, m, MAX =0;
//queue<pair<int, int>> q;
//
//void bfs() {
//	while (!q.empty()) {
//		pair<int, int> cur = q.front(); q.pop();
//		int nx, ny;
//		for (int i = 0; i < 4; i++) {
//			nx = cur.first + dx[i];
//			ny = cur.second + dy[i];
//			if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
//			if (board[nx][ny] == 0) {
//				board[nx][ny] = board[cur.first][cur.second] + 1; // 마지막 최대값 탐색 후 -1 해줘야 함
//				if (MAX < board[nx][ny]) MAX = board[nx][ny];
//				q.push({ nx, ny });
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//	bool allRipe = 1;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> board[i][j];
//			if (board[i][j] == 1) {
//				q.push({ i,j });
//			}
//			if (board[i][j] == 0) {
//				allRipe = 0;
//			}
//		}
//	}
//	if (allRipe) {
//		cout << 0;
//		return 0;
//	}
//	bfs();
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			if (board[i][j] == 0) {
//				cout << -1;
//				return 0;
//			}
//		}
//	}
//	cout << MAX-1;
//
//
//	return 0;
//}
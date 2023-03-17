//#include <bits/stdc++.h>
//using namespace std;
//
//int board[500][500] = {};
//bool visited[500][500];
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//int n, m, tmp, cnt = 0, MAX = 0;
//queue<pair<int, int>> q;
//
//void bfs(int a, int b) {
//	int size = 0;
//	q.push({ a,b });
//	visited[a][b] = 1;
//	while (!q.empty()) {
//		pair<int, int> cur = q.front(); q.pop(); size++;
//		int nx, ny;
//		for (int i = 0; i < 4; i++) {
//			nx = cur.first + dx[i];
//			ny = cur.second + dy[i];
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
//			if (board[nx][ny] == 1 && visited[nx][ny] == 0) {
//				q.push({ nx, ny });
//				visited[nx][ny] = 1;
//			}
//		}
//	}
//	if(MAX < size) MAX = size;
//	cnt++;
//}
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	
//	cin >> n >> m;
//	
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> tmp;
//			board[i][j] = tmp;
//		}
//	}	
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (board[i][j] == 1 && visited[i][j] == 0) bfs(i, j);
//		}
//	}
//	cout << cnt << '\n' << MAX;
//
//	return 0;
//}
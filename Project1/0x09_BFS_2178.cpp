//#include <bits/stdc++.h>
//using namespace std;
//
//string maze[100];
//int dist[100][100];
//int dx[4] = { 1, 0 ,-1, 0 };
//int dy[4] = { 0, 1 ,0, -1 };
//int n, m;
//queue<pair<int, int>> q;
//
//void bfs() {
//	q.push({ 0,0 });
//	dist[0][0] = 1;
//	while (!q.empty()) {
//		pair<int, int> cur = q.front(); q.pop();
//		int nx, ny;
//		for (int i = 0; i < 4; i++) {
//			nx = cur.first + dx[i];
//			ny = cur.second + dy[i];
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
//			if (dist[nx][ny] == -1 && maze[nx][ny] == '1') {
//				dist[nx][ny] = dist[cur.first][cur.second] + 1;
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
//	for (int i = 0; i < n; i++) {
//		cin >> maze[i];
//	}
//	for (int i = 0; i < n; i++) fill(dist[i], dist[i] + m, -1);
//	bfs();
//	cout << dist[n - 1][m - 1];
//
//	return 0;
//}
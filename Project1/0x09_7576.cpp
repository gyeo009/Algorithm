//#include <bits/stdc++.h>
//using namespace std;
//
//// 전역 변수로 잡은 int나 int array는 따로 초기화 안할 시 0으로 채워짐.
//int board[1002][1002];
//int dist[1002][1002];
//int n, m;
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//
//
//int main(void) {
//	//그냥 여러 시작점을 처음에 다 q 하나에 넣으면 됨!
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	queue<pair<int, int>> Q;
//	cin >> m >> n;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> board[i][j];
//			if (board[i][j] == 1)
//				Q.push({ i,j });
//			if (board[i][j] == 0)
//				dist[i][j] = -1;
//			// 익지 않은 토마토의 거리를 -1로 설정
//			// 익은 토마토는 거리가 0으로 초기화 되어있음
//		}
//	}
//	while (!Q.empty()) {
//		auto cur = Q.front(); Q.pop();
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = cur.first + dx[dir];
//			int ny = cur.second + dy[dir];
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
//
//			// 상당히 중요한 조건..
//			if (dist[nx][ny] >= 0) continue;
//			// 거리값이 존재할 때(0 포함) 반복문 continue시켜서
//			// 거리값의 중복연산을 방지한다.
//
//			dist[nx][ny] = dist[cur.first][cur.second]+1;
//			Q.push({ nx, ny });
//		}
//	}
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//
//			// 익지 못한 토마토가 존재할 때...
//			if (dist[i][j] == -1) {
//				cout << -1;
//				return 0;
//			}
//			ans = max(ans, dist[i][j]);
//		}
//	}
//	cout << ans;
//}

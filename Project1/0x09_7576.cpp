//#include <bits/stdc++.h>
//using namespace std;
//
//// ���� ������ ���� int�� int array�� ���� �ʱ�ȭ ���� �� 0���� ä����.
//int board[1002][1002];
//int dist[1002][1002];
//int n, m;
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//
//
//int main(void) {
//	//�׳� ���� �������� ó���� �� q �ϳ��� ������ ��!
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
//			// ���� ���� �丶���� �Ÿ��� -1�� ����
//			// ���� �丶��� �Ÿ��� 0���� �ʱ�ȭ �Ǿ�����
//		}
//	}
//	while (!Q.empty()) {
//		auto cur = Q.front(); Q.pop();
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = cur.first + dx[dir];
//			int ny = cur.second + dy[dir];
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
//
//			// ����� �߿��� ����..
//			if (dist[nx][ny] >= 0) continue;
//			// �Ÿ����� ������ ��(0 ����) �ݺ��� continue���Ѽ�
//			// �Ÿ����� �ߺ������� �����Ѵ�.
//
//			dist[nx][ny] = dist[cur.first][cur.second]+1;
//			Q.push({ nx, ny });
//		}
//	}
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//
//			// ���� ���� �丶�䰡 ������ ��...
//			if (dist[i][j] == -1) {
//				cout << -1;
//				return 0;
//			}
//			ans = max(ans, dist[i][j]);
//		}
//	}
//	cout << ans;
//}

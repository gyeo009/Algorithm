//#include <bits/stdc++.h>
//using namespace std;
//
//#define X first
//#define Y second
//int board[502][502] = {};
//bool visited[502][502] = {};
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//
//int size_by_bfs(int x, int y, int n, int m) {
//	queue<pair<int, int>> Q;
//	Q.push({ x, y });
//	int counter = 0;
//	while (!Q.empty()) {
//		pair<int, int> cur = Q.front();
//		Q.pop();
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = cur.X + dx[dir];
//			int ny = cur.Y + dy[dir];
//			// dir == 0 : ��� ��ĭ
//			// dir == 1 : ���� ��ĭ
//			// dir == 2 : �·� ��ĭ
//			// dir == 3 : �Ʒ��� ��ĭ
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; //�� ������ �Ѿ�� �� �Ѿ��
//			if (visited[nx][ny] || board[nx][ny] != 1) continue; // �湮������ �Ѿ��
//			visited[nx][ny] = 1;
//			Q.push({ nx, ny });
//		}
//		counter++;
//
//	}
//	return counter;
//}
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n; int m; cin >> n >> m;
//	int max = 0;
//	int number = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> board[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (visited[i][j] == 0 && board[i][j] == 1) {
//				visited[i][j] = 1;
//				int k = size_by_bfs(i, j, n, m);
//				number++;
//				if (k > max) max = k;
//			}
//		}
//	}
//	cout << number << '\n' << max;
//}
//#include <bits/stdc++.h>
//using namespace std;
//
//#define X first
//#define Y second
//int board[502][502] = {};
//bool visit[502][502];
//int n = 7, m = 10;
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//
//int main(void) {
//	/*pair<int, int> p1 = make_pair(10, 13);
//	pair<int, int> p2 = make_pair(4, 6);
//	cout << p1.first << ' ' << p1.second << '\n';
//	if (p2 < p1) cout << "p2 < p1";*/
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	queue<pair<int, int>> Q;
//	visit[0][0] = 1;
//	Q.push({ 0,0 });
//	
//	while (!Q.empty()) {
//		pair<int, int> cur = Q.front();
//		cout << '(' << cur.X << ', ' << cur.Y << ") -> " << '\n';
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = cur.X + dx[dir];
//			int ny = cur.Y + dy[dir];
//			// dir == 0 : ��� ��ĭ
//			// dir == 1 : ���� ��ĭ
//			// dir == 2 : �·� ��ĭ
//			// dir == 3 : �Ʒ��� ��ĭ
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; //�� ������ �Ѿ�� �� �Ѿ��
//			if (visit[nx][ny] || board[nx][ny] != 1) continue; // �湮������ �Ѿ��
//			visit[nx][ny] = 1;
//			Q.push({ nx, ny });
//		}
//
//	}
//
//
//
//}
//// �����̿� �ҿ����� ������ bfs ����
//// �Ҹ��� �Ϲ� bfs������ �����̲� ������ if�� ���� �� �Ÿ�����ؼ� �߰�
//// char�� �����ؼ� �� �� �����Ÿ� �� �������� �κ� ��������.........�Ф� �׷��� �� �Ʒ� BFS continue���ǿ� \0�� �߰��ϰų� ������ ���� ��.....�ФФ�
//#include <bits/stdc++.h>
//using namespace std;
//string maze[1000];
//int Jihoon[1000][1000];
//int Fire[1000][1000];
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int r, c;
//queue<pair<int, int>> J;
//queue<pair<int, int>> F;
//
//int main() {
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) {
//		cin >> maze[i];
//		fill(Jihoon[i], Jihoon[i] + c, -1);
//		fill(Fire[i], Fire[i] + c, -1);
//	}
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (maze[i][j] == 'J') {
//				J.push({ i,j });
//				Jihoon[i][j] = 0;
//			}
//			if (maze[i][j] == 'F') {
//				F.push({ i,j });
//				Fire[i][j] = 0;
//			}
//		}
//	}
//
//	while (!F.empty()) {
//		auto cur = F.front(); F.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = cur.first + dx[i];
//			int ny = cur.second + dy[i];
//			if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
//			if (Fire[nx][ny] >= 0 || maze[nx][ny] == '#') continue;
//			Fire[nx][ny] = Fire[cur.first][cur.second] + 1;
//			F.push({ nx,ny });
//		}
//	}
//	while (!J.empty()) {
//		auto cur = J.front(); J.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = cur.first + dx[i];
//			int ny = cur.second + dy[i];
//			if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
//				cout << Jihoon[cur.first][cur.second] + 1;
//				return 0;
//			}
//			if (Jihoon[nx][ny] >= 0 || maze[nx][ny] == '#') continue;
//			if (Fire[nx][ny] != -1 && Jihoon[cur.first][cur.second] + 1 >= Fire[nx][ny]) continue;
//			Jihoon[nx][ny] = Jihoon[cur.first][cur.second] + 1;
//			J.push({ nx,ny });
//		}
//	}
//	cout << "IMPOSSIBLE";
//	return 0;
//}
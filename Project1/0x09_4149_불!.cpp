//// 지훈이와 불에대한 각각의 bfs 구현
//// 불먼저 일반 bfs돌리고 지훈이꺼 돌릴때 if문 조건 불 거리고려해서 추가
//// char로 구현해서 한 줄 받을거면 맨 마지막을 부분 비워줘야지.........ㅠㅠ 그래서 저 아래 BFS continue조건에 \0도 추가하거나 했으면 됐을 듯.....ㅠㅠㅠ
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
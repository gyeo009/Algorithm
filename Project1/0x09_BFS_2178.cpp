//#include <bits/stdc++.h>
//using namespace std;
//int paint[500][500] = {};
//int vis[500][500] = {};
//int moveX[4] = { 1, -1, 0, 0 };
//int moveY[4] = { 0, 0, 1, -1 };
//
//
//int main() {
//	int x, y; cin >> x >> y;
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			cin >> paint[i][j];
//		}
//	}
//
//	int numPaint = 0;
//	int max = 0;
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			if (paint[i][j] == 1 && vis[i][j] == 0) {
//				numPaint++;
//				queue<pair<int, int>> q;
//				vis[i][j] = 1;
//				q.push({ i, j });
//				int area = 0;
//				while (!q.empty()) {
//					area++;
//					pair<int, int> p = q.front(); q.pop();
//					for (int k = 0; k < 4; k++) {
//						int nx = p.first + moveX[k];
//						int ny = p.second + moveY[k];
//						if (nx - 1 > 500 && nx - 1 < 0 && ny - 1 > 500 && ny - 1 < 0) continue;
//						if (!vis[nx][ny] && paint[nx][ny] == 1) {
//							vis[nx][ny] = 1;
//							q.push({ nx, ny });
//						}
//					}
//				}
//				if (area > max) max = area;
//			}
//		}
//	}
//
//
//	cout << numPaint << '\n' << max;
//
//	return 0;
//}
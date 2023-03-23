#include <bits/stdc++.h>
using namespace std;

int m, n;
int dx[4] = { 1, 0, -1, 0 }; // ³² ¼­ ºÏ µ¿
int dy[4] = { 0, -1, 0, 1 };
int board1[8][8];
int board2[8][8];
vector<pair<int, int>> cctv;

void upd(int x, int y, int dir) {

}


int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> board1[i][j];
			if (board1[i][j] == 0 || board1[i][j] == 6) continue;
			cctv.push_back({ i,j });
		}

	for (int tmp = 0; tmp < (1 << (2 * cctv.size())); tmp++) {
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++) {
				board2[i][j] = board1[i][j];
			}
		}
		int brute = tmp;
		for (int i = 0; i < cctv.size(); i++) {
			int dir = brute % 4;
			brute /= 4;
			int x = cctv[i].first;
			int y = cctv[i].second;
			if (board2[x][y] == 1) {

			}
		}
	}

			

	return 0;
}
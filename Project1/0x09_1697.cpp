//#include <bits/stdc++.h>
//using namespace std;
//
//int dist[100002];
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	queue<int> Q;
//	int start, target;
//	fill(dist, dist+100001, -1);
//	cin >> start >> target;
//	Q.push(start);
//	dist[start] = 0;
//
//	//target�� �Ÿ��� ������ ������... ��....
//	while (dist[target] == -1) {
//		int cur = Q.front(); Q.pop();
//		for (int nmove : {cur - 1, cur + 1, cur * 2}) {
//			if (nmove < 0 || nmove > 100000) continue;
//			if (dist[nmove] != -1) continue;		
//			dist[nmove] = dist[cur] + 1;
//			Q.push(nmove);
//		}
//	}
//	// ������ �ִ� �ڸ��� ū�� ���ͼ� ������� ���� �ʳ�??
//	// ���� �ƴ�... ��������� �� ���� dist���� "����" ������ ������ �׳� �� ���Ǹ����ε� �����...
//	cout << dist[target];	
//}

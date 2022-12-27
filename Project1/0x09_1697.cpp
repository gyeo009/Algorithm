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
//	//target의 거리가 설정될 때까지... 와....
//	while (dist[target] == -1) {
//		int cur = Q.front(); Q.pop();
//		for (int nmove : {cur - 1, cur + 1, cur * 2}) {
//			if (nmove < 0 || nmove > 100000) continue;
//			if (dist[nmove] != -1) continue;		
//			dist[nmove] = dist[cur] + 1;
//			Q.push(nmove);
//		}
//	}
//	// 작은게 있는 자리에 큰게 들어와서 비교해줘야 하지 않나??
//	// ㅇㅇ 아님... 상식적으로 더 작은 dist값이 "먼저" 들어오기 때문에 그냥 이 조건만으로도 충분함...
//	cout << dist[target];	
//}

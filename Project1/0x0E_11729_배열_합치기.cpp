//#include <bits/stdc++.h>
//using namespace std;
//int n, m;
//int A[1000000];
//int B[1000000];
//int c[1000000];
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> A[i];
//	}
//	for (int j = 0; j < m; j++)
//	{
//		cin >> B[j];
//	}
//	int aidx = 0, bidx = 0;
//	for (int k = 0; k < n+m; k++)
//	{
//		if (bidx == m) c[k] = A[aidx++];
//		else if (aidx == n) c[k] = B[bidx++];
//		else if (A[aidx] <= B[bidx]) c[k] = A[aidx++];
//		else c[k] = B[bidx++];
//	}
//	for (int i = 0; i < n+m; i++)
//	{
//		cout << c[i] << ' ';
//	}
//
//	return 0;
//}
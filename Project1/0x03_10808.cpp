//#include <bits/stdc++.h>
//using namespace std;
//
//
////int main() {
////	char arr[101];
////	int abc[26];
////	fill(arr, arr + 101, 0);
////	fill(abc, abc + 26, 0);
////	cin >> arr;
////	short i = 0;
////	while (arr[i] != 0) {
////		int alpha = int(arr[i]) - 97;
////		abc[alpha]++;
////		i++;
////	}
////	int j = 0;
////	while (j < 26) {
////		cout << abc[j] << ' ';
////		j++;
////	}
////}
//
//int main() {
//	short arr[1000];
//	short isin[101] = {}; // idx 0 에 0이 있나 없나? 확인
//	int N;
//	for (int i = 0; i < N; i++) { cin >> arr[i]; }
//	for (int i = 0; i < N; i++) {
//		if (isin[100 - arr[i]] == 1)
//			//return 1;
//		isin[arr[i]] = 1;
//	}
//
//
//
//	return 0;
//}
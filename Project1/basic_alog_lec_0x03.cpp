//#include <bits/stdc++.h>
////#include <algorithm>
//using namespace std;
//
//void insert(int idx, int num, int arr[], int& len) {
//	for (int i = len-1; i >= idx; i--) {arr[i + 1] = arr[i];} // 뒤에서 당기기, 반복문 조건 유의
//	arr[idx] = num;
//	len += 1;
//}
//
//void erase(int idx, int arr[], int& len) {
//	for (int i = idx; i < len; i++) {arr[i] = arr[i + 1];} // 앞에서 밀기
//	len -= 1;
//}
//
//void printArr(int arr[], int& len) {
//	for (int i = 0; i < len; i++) cout << arr[i] << ' ';
//	cout << "\n\n";
//}
//
//// 배열 전체 0으로 초기화, algorithm 헤더 사용
//void initiation() {
//	cout << "***** initiaion_test *****\n";
//	int arr[10] = { 10, 50, 40, 30, 70, 20 };
//	int len = 6;
//	fill(arr, arr + len, 0);
//	printArr(arr, len);
//}
//
//void insert_test() {
//	cout << "***** insert_test *****\n";
//	int arr[10] = { 10, 20, 30 };
//	int len = 3;
//	insert(3, 40, arr, len); // 10 20 30 40
//	printArr(arr, len);
//	insert(1, 50, arr, len); // 10 50 20 30 40
//	printArr(arr, len);
//	insert(0, 15, arr, len); // 15 10 50 20 30 40
//	printArr(arr, len);
//}
//
//void erase_test() {
//	cout << "***** erase_test *****\n";
//	int arr[10] = { 10, 50, 40, 30, 70, 20 };
//	int len = 6;
//	erase(4, arr, len); // 10 50 40 30 20
//	printArr(arr, len);
//	erase(1, arr, len); // 10 40 30 20
//	printArr(arr, len);
//	erase(3, arr, len); // 10 40 30
//	printArr(arr, len);
//}
//
//int main(void) {
//	insert_test();
//	erase_test();
//	initiation();
//}
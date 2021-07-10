//#include <bits/stdc++.h>
//using namespace std;
//
//int binary_search(vector<int>& arr, int target, int start, int end) {
//	if (start > end) return -1;
//	int middle = (start + end) / 2;
//	if (arr[middle] > target) {
//		return binary_search(arr, target, start, middle - 1);
//	}
//	else if (arr[middle] < target) {
//		return binary_search(arr, target, middle + 1, end);
//	}
//	else if(arr[middle] == target) {
//		return middle;
//	}
//}
//
//int n, m;
//vector<int> arr, target;
//int main(){
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int x;
//		cin >> x;
//		arr.push_back(x);
//	}
//	sort(arr.begin(), arr.end());
//
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		int x;
//		cin >> x;
//		target.push_back(x);
//	}
//
//	for (int i = 0; i < m; i++) {
//		int result = binary_search(arr, target[i], 0, n-1);
//		if (result == -1) { cout << "no" << endl; }
//		else { cout << "yes" << endl; }
//	}
//	return 0;
//}
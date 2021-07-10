//#include <bits/stdc++.h>
//using namespace std;
//
//
//int binary_search(vector<int>& arr, int target, int start, int end ) {
//	int middle;
//	middle = (start + end) / 2;
//	if (arr[middle] > target) {
//		binary_search(arr, target, start, middle -1);
//	}
//	else if (arr[middle] < target) {
//		binary_search(arr, target, middle + 1, end);
//	}
//	else {
//		return middle;
//	}
//
//}
//
//int n, target;
//vector<int> arr;
//int main() {
//	cin >> n >> target;
//	for (int i = 0; i < n; i++) {
//		int x;
//		cin >> x;
//		arr.push_back(x);
//	}
//	cout << binary_search(arr, target, 0, n-1) << endl;
//	return 0;
//}
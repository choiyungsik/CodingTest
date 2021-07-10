#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int>& arr, int target, int start, int end) {
	if (start > end) return -1;
	int middle = (start + end) / 2;
	int sum=0;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] >= middle) { sum += arr[i] - middle; }
		else {}
	}
	if (sum < target) {
		return binary_search(arr, target, start, middle - 1);
	}
	else if (sum > target) {
		return binary_search(arr, target, middle + 1, end);
	}
	else if(sum == target) {
		return middle;
	}
}

int n, m;
vector<int> arr;
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}
	sort(arr.begin(), arr.end()); //오름차순

	cout << binary_search(arr, m, 0, arr[n-1]) << endl;
	return 0;
}
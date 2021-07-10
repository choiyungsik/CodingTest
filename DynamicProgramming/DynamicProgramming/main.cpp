#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr1[101];
int arr2[10001];
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr1[i] = x;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == arr2[i - 1] + arr1[j]) {
				arr2[i] = arr2[i - 1] + arr1[]
			}
			else {
				arr2[i] = -1;
			}
		}
	}
	return 0;
}
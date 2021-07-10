#include <bits/stdc++.h>
using namespace std;

int n, m;
int parent[100001];

int findParent(int a) {
	if (parent[a] != a) {
		return parent[a] = findParent(parent[a]);
	}
	return a;
}

void unionParent(int a, int b) {
	a = findParent(a);
	b = findParent(b);
	if (a < b) { parent[b] = a; }
	else { parent[a] = b; }
}

int main() {
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		parent[i] = i;
	}

	for (int i = 0; i < m; i++) {
		int a, b, act;
		cin >> act >> a >> b;
		if (act == 0) {
			unionParent(a, b);
		}
		else {
			if (findParent(a) == findParent(b)) { cout << "YES" << endl; }
			else { cout << "NO" << endl; }
		}
	}
	return 0;
}
//#include <bits/stdc++.h>
//using namespace std;
//
//int v, e;
//int parent[100001];
//
//int findParent(int a) {
//	if (parent[a] != a) {
//		return findParent(parent[a]);
//	}
//	else {
//		return a;
//	}
//}
//
//void unionParent(int a,int b) {
//	a = parent[a];
//	b = parent[b];
//	if (a < b) { parent[b] = a; }
//	else { parent[a] = b; }
//}
//
//int main() {
//	cin >> v >> e;
//
//	for (int i = 1; i <= v; i++) {
//		parent[i] = i;
//	}
//
//	for (int i = 0; i < e; i++) {
//		int x, y;
//		cin >> x >> y;
//		unionParent(x, y);
//	}
//
//	cout << "�� ���Ұ� ���� ����: ";
//	for (int i = 1; i <= v; i++) {
//		cout << findParent(i) << ' ';
//	}
//	cout << '\n';
//
//	cout << "�θ� ���̺�: ";
//	for (int i = 1; i <= v; i++) {
//		cout << parent[i] << ' ';
//	}
//	cout << '\n';
//
//	return 0;
//}
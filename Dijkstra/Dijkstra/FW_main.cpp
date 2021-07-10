//#include <bits/stdc++.h>
//using namespace std;
//#define INF 1e9
//
//int n,m;
//int graph[501][501];
//int main() {
//	cin >> n >> m;
//
//	for (int i = 0; i < 501; i++) {
//		fill(graph[i], graph[i] + 501, INF);
//	}
//
//	for (int a = 1; a <= n; a++) {
//		for (int b = 1; b <= n; b++) {
//			if (a == b) graph[a][b] = 0;
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		graph[a][b] = c;
//	}
//
//	for (int i = 1; i <= n; i++) { // i 노드 시작
//		for (int j = 1; j <= n; j++) { // j 노드 끝
//			if (i == j) continue;
//			for (int k = 1; k <= n; k++) { // k번 노드를 거친다
//				int x;
//				x = graph[i][k] + graph[k][j];
//				if (x < graph[i][j]) { graph[i][j] = x; }
//			}
//		}
//	}
//
//	for (int a = 1; a <= n; a++) {
//		for (int b = 1; b <= n; b++) {
//			if (graph[a][b] == INF) {
//				cout << "INFINITY" << ' ';
//			}
//			else {
//				cout << graph[a][b] << ' ';
//			}
//		}
//		cout << '\n';
//	}
//	return 0;
//}
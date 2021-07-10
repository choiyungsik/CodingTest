//#include <bits/stdc++.h>
//#define INF 1e9
//using namespace std;
//
//int n, m, start_node;
//vector<pair<int, int>> graph[100001];	//
//bool visited[100001];	// 방문한 노드
//int d[100001];			// 최단 거리값
//
//int getSmallestNode() {
//	int min_value = INF;
//	int index = 0;
//	for (int i = 0; i < n; i++) {
//		if (d[i] < min_value && !visited[i]) {
//			min_value = d[i];
//			index = i;
//		}
//	}
//	return index;
//}
//
//void dijkstra(int start) {
//	visited[start] = true;
//	d[start] = 0;
//
//	for (int j = 0; j < graph[start].size(); j++) {
//		d[graph[start][j].first] = graph[start][j].second;
//	}
//	for (int i = 0; i < n - 1; i++) {
//		int now = getSmallestNode();
//		visited[now] = true;
//		for (int j = 0; j < graph[now].size(); j++) {
//			int cost = d[now] + graph[now][j].second;
//			if (cost < d[graph[now][j].first]) {
//				d[graph[now][j].first] = cost;
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> n >> m >> start_node; // n : 노드 , m : 간선
//	for (int i = 0; i < m; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		graph[a].push_back({b,c});
//	}
//	fill_n(d,100001,INF);
//
//	dijkstra(start_node);
//	for (int i = 1; i <= n; i++) {
//		if (d[i] == INF) {
//			cout << "INFINITY" << endl;
//		}
//		else {
//			cout << d[i] << endl;
//		}
//	}
//
//	return 0;
//}
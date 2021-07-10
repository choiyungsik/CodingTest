//#include <bits/stdc++.h>
//using namespace std;
//#define INF 1e9
//
//int n, m, start; // n�� ��� ����, m�� ���� ����
//
//vector<pair<int, int>> graph[100001];
//int d[100001]; // �ִܰŸ� �׷���
//bool visited[100001];
//
//void adv_dijkstra(int first_node) {
//	priority_queue<pair<int, int>> pq; // 1: �Ÿ�, 2: ���� ���
//	pq.push({ 0,first_node });
//	d[first_node] = 0;
//	while (!pq.empty()) {
//		int dist = pq.top().first;
//		int now = pq.top().second;
//		pq.pop();
//		if (d[now] < dist) continue; // �ִܰŸ� �׷����� �� ���� ũ�� ����
//		for (int i = 0; i < graph[now].size(); i++) {
//			int cost = dist + graph[now][i].second;
//			if (cost < d[graph[now][i].first]) {
//				d[graph[now][i].first] = cost;
//				pq.push(make_pair(cost,graph[now][i].first)); // ���ŵ� �ִ� ��δ� �켱���� ť�� �ٽ� ��
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> n >> m >> start;
//	for (int i = 0; i < m; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		graph[a].push_back({ b, c });
//	}
//	fill_n(d, 100001, INF);
//	adv_dijkstra(start);
//
//	for (int i = 0; i <= n; i++) {
//		if(d[i] == INF){ 
//			cout << "INFINITY" << endl; 
//		}
//		else { 
//			cout << d[i] << endl; 
//		}
//	}
//	return 0;
//}
#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

int n, m, c;
vector<pair<int, int>> graph[30001];
int d[30001];
bool visited[30001];

int GetSmallestNode() {
	int minNode=INF,index;
	for (int i = 0; i < n; i++) {
		if (!visited[i] && d[i] < minNode) {
			minNode = d[i];
			index = i;
		}
	}
	return minNode;
}

void dijkstra(int start_node) {
	visited[start_node] = true;
	d[start_node] = 0;
	for (int i = 0; i < graph[start_node].size; i++) {
		d[graph[start_node][i].first] = graph[start_node][i].second;
	}

	for (int j = 1; j < n; j++) {
		int now = GetSmallestNode();
		visited[now] = true;
		for (int i = 0; i < graph[now].size; i++) {
			if (d[graph[now][i].first] > d[now] + graph[now][i].second) {
				d[graph[now][i].first] = d[now] + graph[now][i].second;
			}
		}
	}
}

int main(){
	cin >> n >> m >> c;

	for (int i = 0; i < m; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		graph[x].push_back({ y,z });
	}
	fill_n(d, 30001, INF);

	int count = 0;
	int maxdistance = 0;
	for (int i = 1; i <= n; i++) {
		if (d[i] != INF) {
			count += 1;
			maxdistance = max(maxdistance, d[i]);
		}
	}

}
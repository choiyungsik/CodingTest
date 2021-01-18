#include <bits/stdc++.h>
using namespace std;

vector<int> graph[9];
bool visit[9];

void dfs(int start) {
	queue<int> q;
	q.push(start);
	visit[start] = true;

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x << ' ';
		for (int i = 0; i < graph[x].size(); i++) {
			int y = graph[x][i];
			if (!visit[y]) {
				q.push(y);
				visit[y] = true;
			}
		}
	}
}

//int main() {
//	graph[1].push_back(2);
//	graph[1].push_back(3);
//	graph[1].push_back(8);
//
//	graph[2].push_back(1);
//	graph[2].push_back(7);
//
//	graph[3].push_back(1);
//	graph[3].push_back(4);
//	graph[3].push_back(5);
//
//	graph[4].push_back(3);
//	graph[4].push_back(5);
//
//	graph[5].push_back(3);
//	graph[5].push_back(4);
//
//	graph[6].push_back(7);
//	
//	graph[7].push_back(2);
//	graph[7].push_back(6);
//	graph[7].push_back(8);
//
//	graph[8].push_back(1);
//	graph[8].push_back(7);
//
//	dfs(1);
//	return 0;
//}
#pragma warning(disable : 4996)
#include <bits/stdc++.h>
using namespace std;

int n, m;
int graph[1000][1000];
bool visit[1000][1000];

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};


bool check(int x, int y) {
	if (!visit[x][y] && graph[x][y] == 0) {
		visit[x][y] = true;
		for (int i = 0; i < 4; i++) {
			int nx=0, ny=0;
			nx = x + dx[i];
			ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
				continue;
			}

			if (!visit[nx][ny] && graph[nx][ny] == 0) { 
				check(nx, ny);
			}
		}
		return true;
	}
	else {
		return false;
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%1d", &graph[i][j]);
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (check(i, j)) {
				ans += 1;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
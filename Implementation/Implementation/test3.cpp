#include <bits/stdc++.h>
using namespace std;

int n, m, x, y, direction;
int d[50][50];
int arr[50][50];
int result = 1;

int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };

void turn_left() {
	direction -= 1;
	if (direction == -1) direction = 3;
}

int main() {
	cin >> n >> m;
	cin >> x >> y >> direction;
	d[x][y] = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int x;
			cin >> x;
			arr[i][j] = x;
		}
	}
	bool flag = true;
	while (flag == true) {
		flag = false;
		for (int i = 0; i < 4; i++) {
			int nx = 0, ny = 0;
			turn_left();
			nx = x + dx[direction];
			ny = y + dy[direction];

			if (d[nx][ny] == 0 && arr[nx][ny] == 0) {
				d[nx][ny] = 1;
				x = nx;
				y = ny;
				result += 1;
				flag = true;
				break;
			}
		}

		if (flag == false) {
			int nx = 0, ny = 0;
			nx = x - dx[direction];
			ny = y - dy[direction];
			if (arr[nx][ny] == 0) {
				x = nx;
				y = ny;
				flag = true;
			}
			else {}
		}
	}

	cout << result << endl;
	return 0;
}
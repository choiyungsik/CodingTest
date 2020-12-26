#include <bits/stdc++.h>
#include <vector>
using namespace std;

int n;
string plans;
int xpos = 1, ypos = 1;

int x[4] = { 0,0,-1,1 };
int y[4] = { -1,1,0,0 };
char moveType[4] = { 'L','R','U','D' };

int main() {
	cin >> n;
	cin.ignore();
	getline(cin, plans);
	char s;

	for (int i = 0; i < plans.size(); i++) {
		char plan = plans[i];
		int nx = -1, ny = -1;
		for (int j = 0; j < 4; j++) {
			if (plan == moveType[j]) {
				nx = xpos + x[j];
				ny = ypos + y[j];
			}
		}
		if (xpos < 1 || ypos < 1 || xpos > n || ypos > n) continue;

		xpos = nx;
		ypos = ny;
	}

	cout << xpos << " " << ypos << endl;
	return 0;
}
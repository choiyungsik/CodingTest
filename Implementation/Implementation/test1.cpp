#include <bits/stdc++.h>
#include <vector>
using namespace std;

int n;
char s;
int main() {
	cin >> n;
	vector<char> plan;
	cin >> s;
	plan.push_back(s);

	while (s != NULL) {
		cin >> s;
		plan.push_back(s);
	}
	for (int i = 0; i < plan.size(); i++) {
		cout << plan[i] << endl;
	}



	return 0;
}
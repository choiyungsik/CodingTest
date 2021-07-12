//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m;
//int parent[100001];
//vector<pair<int, pair<int, int> > > edges;
//int max_edges = 0, result;
//
//int findParent(int a) {
//	if (parent[a] != a) {
//		return parent[a] = findParent(parent[a]);
//	}
//	return a;
//}
//
//void unionParent(int a, int b) {
//	a = findParent(a);
//	b = findParent(b);
//	if (a < b) { parent[b] = a; }
//	else { parent[a] = b; }
//}
//
//int main(){
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++) {
//		parent[i] = i;
//	}
//
//	for (int i = 0; i < m; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		edges.push_back({ c,{a,b} });
//	}
//
//
//	sort(edges.begin(),edges.end());
//	max_edges = 0;
//
//	for (int i = 0; i < edges.size(); i++) {
//		int cost = edges[i].first;
//		int a = edges[i].second.first;
//		int b = edges[i].second.second;
//
//		if (parent[a] != parent[b]) { 
//			unionParent(a, b);
//			result += cost;
//			max_edges = cost;
//		}
//	}
//
//
//	cout << result - max_edges << endl;
//
//	return 0;
//}
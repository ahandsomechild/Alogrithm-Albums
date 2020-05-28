#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

struct edge {
	int u, v;
};

vector <int> e[100001];
vector <edge> s;

bool cmp(edge x, edge y) {
	if (x.v != y.v) {
		return x.v < y.v;
	}
	else {
		return x.u < y.u;
	}
}

bool vis1[100001] = { 0 };
void dfs(int x) {
	vis1[x] = 1;
	cout << x << " ";
	for (int i = 0; i < e[x].size(); i++) {
		int p = s[e[x][i]].v;
		if (!vis1[p]) {
			dfs(p);
		}
	}
}
bool vis2[100001] = { 0 };
void bfs(int x) {
	queue <int> q;
	q.push(x);
	cout << x << " ";
	vis2[x] = 1;
	while (!q.empty()) {
		int f = q.front();
		for (int i = 0; i < e[f].size(); i++) {
			int p = s[e[f][i]].v;
			if (!vis2[p]) {
				q.push(p);
				cout << p << " ";
				vis2[p] = 1;
			}
		}
		q.pop();
	}
}
int main() {
	int n, m;
	int i, j;
	cin >> n >> m;
	for (i = 0; i < m; i++) {
		int b, e;
		cin >> b >> e;
		edge temp;
		temp.u = b;
		temp.v = e;
		s.push_back(temp);
	}
	sort(s.begin(),s.end(), cmp);
	for (i = 0; i < m; i++) {
		e[s[i].u].push_back(i);
		//初始化e数组，在e[s[i].u]（也就是i号边的起点s[i].u连接的边的数组）中存入i号边
	}
	dfs(1);
	cout << endl;
	bfs(1);
	return 0;
}
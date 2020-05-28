#include<iostream>
#include<vector>

using namespace std;

struct edge {
	int u, v;
};

vector <int> e[100001];
vector <edge> s;

bool vis1[100001] = { 0 };

void dfs(int n) {

}

int main() {
	int n, m;
	cin >> n >> m;
	int i;
	for (i = 0; i < m; i++) {
		int uu, vv;
		cin >> uu >> vv;
		edge temp;
		temp.u = uu;
		temp.v = vv;
		s.push_back(temp);
	}

	for (i = 0; i < s.size(); i++) {
		e[s[i].u].push_back(s[i].v);
	}

	return 0;
}
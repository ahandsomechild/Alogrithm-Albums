#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

const int MAXV = 510;
const int INF = 1000000000;

int vexnum, arcnum;//顶点数，边数
int start,ed;
int G[MAXV][MAXV];  //邻接矩阵
int weight[MAXV];	//权重（救援小组）
int d[MAXV], w[MAXV], num[MAXV]; //d记录最短距离,w记录最大权重之和，num记录路径条数
bool visit[MAXV] = { false };

void Dijkstra(int s) {
	fill(d, d + MAXV, INF);
	memset(w, 0, sizeof(w));
	memset(num, 0, sizeof(num));

	d[s] = 0;
	w[s] = weight[s];
	num[s] = 1;
	for (int i = 0; i < vexnum; i++) {
		int u = -1, MIN = INF;
		for (int j = 0; j < vexnum; j++) {
			if (visit[j] == false && d[j] < MIN) {
				u = j;
				MIN = d[j];
			}
		}
		if (u == -1) return;
		visit[u] = true;
		for (int v = 0; v < vexnum; v++) {
			if (visit[v] == false && G[u][v] != INF) {
				if (d[u] + G[u][v] < d[v]) {
					d[v] = d[u] + G[u][v];
					w[v] = w[u] + weight[v];
					num[v] = num[u];
				}
				else if(d[u] + G[u][v] == d[v]){
					if (w[u] + weight[v] > w[v]) {
						w[v] = w[u] + weight[v];
					}
					num[v] += num[u];
				}
			}
		}
	}
}

int main() {
	cin >> vexnum >> arcnum >> start >> ed;
	for (int i = 0; i < vexnum; i++) {
		cin >> weight[i];
	}
	int u, v;
	fill(G[0], G[0] + MAXV * MAXV, INF);
	for (int j = 0; j < arcnum; j++) {
		cin >> u >> v;
		cin >> G[u][v];
		G[v][u] = G[u][v];
	}
	Dijkstra(start);
	cout << num[ed] << " " << w[ed] << endl;
	return 0;
}
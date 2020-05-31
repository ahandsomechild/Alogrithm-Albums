#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>

//负值在非负值前面
//[0,k]的元素都在大于K的元素前面
using namespace std;
#define maxsize 100010
struct LNode {
	int address, data, next;
	int order = 2 * maxsize;
}nodes[maxsize];

bool cmp(LNode a, LNode b) {
	return a.order < b.order;
}

int main() {
	int first, n, k;
	int i;
	cin >> first >> n >> k;

	for (i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		cin >> nodes[temp].data;
		cin >> nodes[temp].next;
		nodes[temp].address = temp;
	}

	int p = first, seq = 0;
	while (p != -1) {
		if (nodes[p].data < 0) {
			nodes[p].order = (seq++) - maxsize;
		}
		else if (nodes[p].data > k) {
			nodes[p].order = maxsize + (seq++);
		}
		else {
			nodes[p].order = seq++;
		}
		p = nodes[p].next;
	}
	sort(nodes, nodes + maxsize, cmp);
	for (i = 0; i < seq; i++) {
		if (i < seq - 1) {
			printf("%05d %d %05d\n", nodes[i].address, nodes[i].data, nodes[i + 1].address);
		}
		else {
			printf("%05d %d -1\n", nodes[i].address, nodes[i].data);
		}
		
	}
	return 0;
}
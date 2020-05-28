#include<iostream>
#include<string>

using namespace std;

struct toll {
	int di;// 00 表示朝向圈内，11 表示朝向圈外
	string name;
};

struct order {
	int lr;//0左1右
	int num;
};

int main() {
	int n, m, i, j;
	int last1, last2;//记录最后一个执行指令的玩具、最后一个指令的方向
	cin >> n >> m;
	toll* t = new toll[n];
	order* d = new order[m];
	for (i = 0; i < n; i++) {
		cin >> t[i].di >> t[i].name;
	}
	for (i = 0; i < m; i++) {
		cin >> d[i].lr >> d[i].num; 
	}
	last2 = d[n - 1].lr;
	i = 0;
	int temp;
	for (j = 0; j < m; j++) {
		//cout << i << t[i].name;
		if (j == m - 1) {
			last1 = t[i].di;
		}
		if (t[i].di == 0) { //朝内
			if (d[j].lr == 0) { //左
				temp = d[j].num;
				i = (i + n - temp) % n;
			}
			else if (d[j].lr == 1) {
				temp = d[j].num;
				i = (i + temp) % n;
			}
		}
		else if (t[i].di == 1) { //朝外
			if (d[j].lr == 0) { //左
				temp = d[j].num;
				i = (i + temp) % n;
			}
			else if (d[j].lr == 1) {
				temp = d[j].num;
				i = (i + n - temp) % n;
			}
		}
	}
	
	cout << t[i].name;
	return 0;
}
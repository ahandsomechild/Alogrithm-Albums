#include<iostream>
#include<string>

using namespace std;

struct toll {
	int di;// 00 ��ʾ����Ȧ�ڣ�11 ��ʾ����Ȧ��
	string name;
};

struct order {
	int lr;//0��1��
	int num;
};

int main() {
	int n, m, i, j;
	int last1, last2;//��¼���һ��ִ��ָ�����ߡ����һ��ָ��ķ���
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
		if (t[i].di == 0) { //����
			if (d[j].lr == 0) { //��
				temp = d[j].num;
				i = (i + n - temp) % n;
			}
			else if (d[j].lr == 1) {
				temp = d[j].num;
				i = (i + temp) % n;
			}
		}
		else if (t[i].di == 1) { //����
			if (d[j].lr == 0) { //��
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
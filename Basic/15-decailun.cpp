#include <iostream>
#include<string.h>
#include<algorithm>
/*
 * ������Ҫ��Ϊ���������
 * 1������ž���������¼ȡ�ߣ�
 * 2���³�������û�г�������¼ȡ�ߣ�
 * 3������ž�δ��������¼ȡ�ߣ����ǵ·ָ��ڲŷ֣�
 * 4������ž�δ�������¼ȡ�ߡ�
 */
using namespace std;
struct student { //�����ṹ�������׼��֤�š��¡��š��ܷ���
	char id[9];
	int d, c, sum;
	int l; //����һ���ȼ��������ж����������˳��
} a[100001];
bool cmp(student a, student b) { //������������������˳��Ϊ���·ֺͲŷ־�����������¼ȡ�ߣ��ŷֲ������·ֵ��ߣ��²ŷ־���������¼ȡ�ߣ����ǵ·ִ��ڲŷ�
	if (a.l != b.l)
		return a.l < b.l;
	else if (a.sum != b.sum)
		return a.sum > b.sum;
	else if (a.d != b.d)
		return a.d > b.d;
	else
		return strcmp(a.id, b.id) < 0; //������ĸ˳���С����
}
int main() {
	int N, L, H;
	int i;
	int num;
	cin >> N >> L >> H;
	num = N;
	for (i = 0; i < N; i++) {
		cin >> a[i].id >> a[i].d >> a[i].c;
		a[i].sum = a[i].d + a[i].c;
		if (a[i].d < L || a[i].c < L) {
			a[i].l = 5;
			num--;
		} else if (a[i].d >= H && a[i].c >= H)
			a[i].l = 1;
		else if (a[i].d >= H && a[i].c < H)
			a[i].l = 2;
		else if (a[i].d >= a[i].c)
			a[i].l = 3;
		else
			a[i].l = 4;
	}
	sort(a, a + N, cmp);
	cout << num << endl;
	for (i = 0; i < num; i++)
		cout << a[i].id << " " << a[i].d << " " << a[i].c << endl;
	return 0;
}

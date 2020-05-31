#include <iostream>
#include<string.h>
#include<algorithm>
/*
 * 本题需要分为几个情况：
 * 1、德与才均超过优先录取线；
 * 2、德超过而才没有超过优先录取线；
 * 3、德与才均未超过优先录取线，但是德分高于才分；
 * 4、德与才均未超过最低录取线。
 */
using namespace std;
struct student { //创建结构体来存放准考证号、德、才、总分数
	char id[9];
	int d, c, sum;
	int l; //定义一个等级，用来判断排序的优先顺序
} a[100001];
bool cmp(student a, student b) { //按照题意来排序，优先顺序为：德分和才分均不低于优先录取线，才分不到但德分到线，德才分均低于优先录取线，但是德分大于才分
	if (a.l != b.l)
		return a.l < b.l;
	else if (a.sum != b.sum)
		return a.sum > b.sum;
	else if (a.d != b.d)
		return a.d > b.d;
	else
		return strcmp(a.id, b.id) < 0; //按照字母顺序从小到大
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

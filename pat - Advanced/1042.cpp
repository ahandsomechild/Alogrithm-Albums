#include<iostream>
#include<algorithm>
/*
k=2
S3, H5, C1,  D13   J2
4   2   5     3     1
J2  H5  D13  S3    C1
4   2   5     3     1
C1  H5  S3   J2    D13

1 2 3-----54
36
*/

using namespace std;

struct number {
	int num;
	int order;
};
bool cmp(number a, number b) {
	return a.order < b.order;
}
void print(int num) {
	int r = num / 13;
	switch (r)
	{
		case 0:
			cout << "S";
			break;
		case 1:
			cout << "H";
			break;
		case 2:
			cout << "C";
			break;
		case 3:
			cout << "D";
			break;
		case 4:
			cout << "J";
			break;
	}
	cout << num % 13 + 1;
}
int main() {
	int i,j = 0;
	int k;
	int rank[54];
	number n[54];
	for (i = 0; i < 54; i++) {
		n[i].num = i;
	}
	cin >> k;
	for (i = 0; i < 54; i++) {
		cin >> rank[i];
		n[i].order = rank[i];
	}
	sort(n, n + 54,cmp);
	k = k - 1;
	while (k--) {
		for (i = 0; i < 54; i++) {
			n[i].order = rank[i];
		}
		sort(n, n + 54, cmp);
	}
	for (i = 0; i < 54; i++) {
		print(n[i].num);
		
		if (i < 53) {
			cout << " ";
		}
	}
	return 0;
}
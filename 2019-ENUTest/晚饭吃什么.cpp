#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int main() {
	int t;
	char n[1010]; //所选的数
	char m[10];//窗口数量

	cin >> t;
	while (t--) {
		cin >> n >> m;
		int l1 = strlen(n);
		int l2 = strlen(m);

		if (l1 < l2 || (strcmp(n, m) < 0 && l1 == l2)) {
			printf("%s", n);
		}
		else {
			

		}
	}
	
	return 0;
}
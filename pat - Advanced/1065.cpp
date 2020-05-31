#include<iostream>

using namespace std;

/*
当a+b>2^63时，会超过long long的正向最大值发生正溢出，正溢出后的值区间为[-2^64, -2]，右边界由(2^64-2)%(2^64)得
当a+b<-2^63时，会超过long long的负向最小值发生负溢出，负溢出后的值区间为[0, 2^63]，左边界由(-2^64)%(2^64)得
————————————————
版权声明：本文为CSDN博主「码奴生来就只知道前进」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/hy971216/article/details/81123220*/
int main() {
	int i, n;
	long long int a, b, c, ans;	
	int flag;

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a >> b >> c;
		ans = a + b;
		if (a > 0 && b > 0 && ans < 0) {
			flag = 1;
		}else if (a < 0 && b < 0 && ans >= 0) {
			flag = 0;
		}else if (ans > c) {
			flag = 1;
		}
		else {
			flag = 0;
		}
		if (flag) {
			printf("Case #%d: true\n", i + 1);
		}
		else {
			printf("Case #%d: false\n", i + 1);
		}
	}

	return 0;
}
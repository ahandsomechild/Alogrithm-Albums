#include<iostream>

using namespace std;

/*
��a+b>2^63ʱ���ᳬ��long long���������ֵ�������������������ֵ����Ϊ[-2^64, -2]���ұ߽���(2^64-2)%(2^64)��
��a+b<-2^63ʱ���ᳬ��long long�ĸ�����Сֵ�������������������ֵ����Ϊ[0, 2^63]����߽���(-2^64)%(2^64)��
��������������������������������
��Ȩ����������ΪCSDN��������ū������ֻ֪��ǰ������ԭ�����£���ѭCC 4.0 BY-SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https://blog.csdn.net/hy971216/article/details/81123220*/
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
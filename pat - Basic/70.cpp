#include<iostream>
#include<algorithm>
//��Ϊÿ�δ�����ԭ���������ӵĳ��Ⱦͻ���롣����Խ��������ԽҪ����Űɣ�
//ÿһ�δ����󣬶�Ҫ����һ����Ȼ������̵��������Ӵ�����
//���ǹ���������˼���£��������~
//���г�ʱ���������������������������Ǿ�������������
//Ŷֻ��Ҫ����������Ϊǰ�������ۺ�����ӿ϶��ȵ��������Ӷ̡������������
using namespace std;

#define INF 10001
int main() {
	int n,i;
	cin >> n;

	int* a = new int[n];

	for (i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);
	int res = a[0];
	for (i = 1; i < n; i++) {
		res = (res + a[i]) / 2;
	}

	cout << res;
	return 0;
}
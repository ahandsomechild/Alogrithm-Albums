#include<iostream>
#include<algorithm>
//因为每次串连后，原来两段绳子的长度就会减半。所以越长的绳子越要往后放吧！
//每一次串连后，都要再排一次序，然后挑最短的两个绳子串连！
//就是哈夫曼树的思想呗！我真聪明~
//运行超时。。。。。。啊啊啊啊！！！那就是排序慢了呗
//哦只需要依次排序，因为前两个对折后的绳子肯定比第三个绳子短。。。我想多了
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
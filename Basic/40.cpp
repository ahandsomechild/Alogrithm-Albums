/*
APPAPT


PPPAAAATTPPAATT

第一次提交后三个测试点运行超时（循环过多吧）
第二次提交后后两个测试点答案错误，但是不超时了！微笑
由于结果可能比较大，只输出对 1000000007 取余数的结果。不要忽略这一句，这说明了个数有可能很大，所以将sum改为longlong型后面两个测试点就过了！！
*/
#include<iostream>
#include<string>

using namespace std;

int main() {
	string a;
	int i, j, k;
	int p[100001] = { 0 };
	int t[100001] = { 0 };
	long long int sum = 0;
	int ptemp = 0, ttemp = 0;
	getline(cin, a);
	j = 0;
	//从前往后统计每一个A前P的个数
	for (i = 0; i < a.length(); i++) {
		if (a[i] == 'P') {
			ptemp++;
		}
		if (a[i] == 'A') {
			p[j++] = ptemp;
		}
	}
	k = 0;
	//从后往前统计每一个人A后T的个数
	for (i = a.length() - 1; i >= 0; i--) {
		if (a[i] == 'T') {
			ttemp++;
		}
		if (a[i] == 'A') {
			t[k++] = ttemp;
		}
	}
	//p--123  
	//t--321
	for (i = 0; i < j; i++) {
		//cout << p[i] << " ";
		//cout << t[j - i - 1] << endl;
		sum += p[i] * t[j - i - 1];
	}
	
	cout << sum % 1000000007 << endl;
	return 0;
}

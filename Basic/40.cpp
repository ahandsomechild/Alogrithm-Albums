/*
APPAPT


PPPAAAATTPPAATT

��һ���ύ���������Ե����г�ʱ��ѭ������ɣ�
�ڶ����ύ����������Ե�𰸴��󣬵��ǲ���ʱ�ˣ�΢Ц
���ڽ�����ܱȽϴ�ֻ����� 1000000007 ȡ�����Ľ������Ҫ������һ�䣬��˵���˸����п��ܴܺ����Խ�sum��Ϊlonglong�ͺ����������Ե�͹��ˣ���
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
	//��ǰ����ͳ��ÿһ��AǰP�ĸ���
	for (i = 0; i < a.length(); i++) {
		if (a[i] == 'P') {
			ptemp++;
		}
		if (a[i] == 'A') {
			p[j++] = ptemp;
		}
	}
	k = 0;
	//�Ӻ���ǰͳ��ÿһ����A��T�ĸ���
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

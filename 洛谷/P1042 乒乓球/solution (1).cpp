#include<iostream>

/*
1.���뷽ʽ
2.n���Ʊ���������־��һ���ﵽ�򳬹�n�֣����������ڵ���2
	(w >= n || l >= n) && ((w - l >= 2) || (l - w >= 2))
3.����������������������������
	���Ե�10��
	input:WWWWWWWWWWWWWWWWWWWWWWE
	output:
		11:0
		11:0
		0:0����ǰ��0:0Ҳ��Ҫ�������Ŷ��������yeah��������
*/
using namespace std;
const int maxn = 62510;
int main() {
	char c;
	int w = 0, l = 0;
	int i = 0, j;
	char t[maxn];
	do {
		cin >> c;
		if (c == 'W' || c == 'L') {
			t[i++] = c;
		}
		if (c == 'E') {
			break;
		}
	} while (c != 'E');
	for (j = 0; j < i; j++) {		
		if (t[j] == 'W') {
			w++;
		}
		if( t[j] == 'L') {
			l++;
		}	
		if ((w >= 11 || l >= 11) && ((w - l >= 2) || (l - w >= 2))) {
			cout << w << ":" << l << endl;
			w = 0;
			l = 0;
		}
	}
	cout << w << ":" << l << endl;
	cout << endl;
	w = 0; l = 0;
	for (j = 0; j < i; j++) {
		
		if (t[j] == 'W') {
			w++;
		}
		if (t[j] == 'L') {
			l++;
		}
		if ((w >= 21 || l >= 21) && ((w - l >= 2) || (l - w >= 2))) {
			cout << w << ":" << l << endl;
			w = 0;
			l = 0;
		}
	}
	cout << w << ":" << l << endl;
	return 0;
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int c[5001];
int ans[5001];
int main() {	
	string a, b;		
	cin >> a >> b;
	//a,b����0
	if ((a.length() == 1 && a[0] == '0') || (b.length() == 1 && b[0] == '0')) {
		cout << "0";
		return 0;

	}
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int f, f2, i, j, k, m;
	//f�˷���λ,f2ÿλ�����ӽ�λ
	int prel,length;
	//ѭ����ÿһλ������
	for (i = 0; i < b.length(); i++) {
		f = 0;
		k = 0;
		int b1 = b[i] - '0';//ȡһλ����
		int wei = i;
		while (wei--) { //��λ��Ҫ��0���ڶ�λ��1��0
			c[k++] = 0;
		}
		//�뱻����ÿһλ���
		for (j = 0; j < a.length(); j++) {
			int a1 = a[j] - '0';	
			if (a1 * b1 + f < 10) {
				c[k] = a1 * b1 + f;
				f = 0;
			}
			else {
				c[k] = (a1 * b1 + f) % 10;
				f = (a1 * b1 + f) / 10;
			}	
			k++;
		}
		//���һλ�Ľ�λ
		if (f != 0) {
			c[k++] = f;
		}
		// ������һλ�˱������Ľ������ans������������
		if (i == 0) {  
			for (m = 0; m < k; m++) {
				ans[m] = c[m];
			}
			prel = k;//ǰһ������ĳ���
		}
		else {			
			m = 0; f2 = 0;
			while (m < prel) {			
				if (ans[m] + c[m] + f2 < 10){
					ans[m] = ans[m] + c[m] + f2;
					f2 = 0;
				}
				else {
					int tt = f2; //������ansֵ��Ӱ��
					f2 = (ans[m] + c[m] + f2) / 10;
					ans[m] = (ans[m] + c[m] + tt) % 10;
					
				}	
				m++;
			}
			if (prel != k ){
				while (m < k) {
					if (c[m] + f2 <10) {
						ans[m] = c[m] + f2;
						f2 = 0;						
					}
					else {
						int tt = f2;
						f2 = (c[m] + f2) / 10;
						ans[m] = (c[m] + tt) % 10;						
					}
					m++;
				}				
			}
			if (f2 != 0) {
				ans[m++] = f2;
			}
			prel = m;	
		}
	}	
	for (int w = prel-1; w >= 0; w--) {
		cout << ans[w];
	}
	cout << endl;	
	return 0;
}
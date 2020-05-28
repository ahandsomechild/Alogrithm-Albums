#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

#define maxsize 10100
//比较大小   1:a大  2:b大
int compare(string a, string b) {
	int flag = 0;
	if (a.length() > b.length()) {
		return 1;
	}
	else if(a.length() < b.length()){
		return 2;
	}
	else {
		//长度相等，未逆转，直接比较，低位即数值高位
		for (int i = 0; i < a.length(); i++) {
			if (a[i] > b[i]) {
				flag = 1;
				return 1;
			}
			else if (b[i] > a[i]) {
				flag = 1;
				return 2;
			}
		}
	}
	if (flag == 0) {
		return 0;//相等
	}
}
int main() {
	string a, b;
	int i = 0, j;
	int f = 0;//是否产生借位
	int ans[maxsize];

	cin >> a >> b;
	int c = compare(a, b);

	//a、b相等
	if (c == 0) {
		cout << "0" << endl;
		return 0;
	}
	//若b比a大，先输出一个负号，交换a,b
	if (c == 2) {
		cout << "-"; 
		swap(a, b);
	}
	
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	int atemp, btemp;
	for (i = 0; i < b.length(); i++) {
		atemp = a[i] - '0';
		btemp = b[i] - '0';
		if (atemp - f - btemp < 0) {			
			ans[i] = atemp + 10 - f - btemp;
			f = 1;
		}
		else {			
			ans[i] = atemp - f - btemp;
			f = 0;
		}
		
	}
	if (a.length() > b.length()) {
		while (i < a.length()) {
			atemp = a[i] - '0';
			if (atemp - f < 0) {				
				ans[i] = atemp + 10 - f;
				f = 1;
			}
			else {				
				ans[i] = atemp - f;
				f = 0;
			}
			i++;
		}
	}
	int zero = 0;
	//3330000000000000
	//3320000000000000
	//0010000000000000前面的0不能输出
	for (j = i - 1; j >= 0; j--) {
		if (ans[j] != 0) {
			zero = 1;
		}//前面的0不输出
		if (zero) {
			cout << ans[j];
		}
		
	}

	return 0;
}
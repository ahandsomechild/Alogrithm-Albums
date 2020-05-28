#include<iostream>

using namespace std;

int main(){
	char ch[1001];
	char temp[1000];
	int res[26] = {0};
	cin.get(ch,1001);
	int t;
	int i,j;
	i = 0;
	while(ch[i] !='\0'){
		temp[i++] = ch[i];
	}
	for(j = 0 ; j < i ; j++){
		if(temp[j]>='a' && temp[j]<='z'){
			t = temp[j] - 'a';
			res[t]++;
		}
		if(temp[j]>='A' && temp[j]<='Z'){
			t = temp[j] - 'A';
			res[t]++;
		}
	}
	int max = res[0];
	t = 0;
	for(i = 0 ; i < 26; i++){
		if(res[i] > max){
			max = res[i];
			t = i;
		}
	}
	char r = 'a' + t;
	cout << r << " " << res[t] << endl;
	return 0;
}
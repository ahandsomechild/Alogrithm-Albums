/*
	PAT  PAAT PAAAT 
	AAPATAA
	AAPATAA	 AAPAATAAAA  AAPAAATAAAAAA
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
	int n,i,j,len;
	string str;
	int left, mid, right;
	cin >> n;
	while(n--){
		int flag = 0;
		cin >> str;
		len = str.size();
		for(i=0;i<len;i++){
			if(str[i]!='P'&&str[i]!='A'&&str[i]!='T'){
				flag = 1;
			}
			if(str[i] == 'P')
			{
				left = i;
			}
			if(str[i] == 'T'){
				mid = i-left-1;
			}
		}
		right = len - left - mid -2;
		//cout << left << mid << right << endl;
		if( mid >= 1 && right == left*mid && left !=1 ){
			flag = 0;
		}else{
			flag = 1;
		}

		if(flag == 1){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}
	
}

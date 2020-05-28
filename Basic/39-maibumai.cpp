#include<iostream>

using namespace std;

int main(){
	int small[26] = {0};
	int big[26] = {0};
	int number[10] = {0};
	int temp;
	char c;
	int sum = 0,no = 0;
	int flag = 0;
	while((c = getchar())!='\n'){
		if(c >= 'a' && c <= 'z'){
			temp = c - 'a';
			small[temp] ++;
		}else if(c >= 'A' && c <= 'Z'){
			temp = c - 'A';
			big[temp] ++;
		}else if(c >= '0' && c <= '9'){
			temp = c - '0';
			number[temp] ++;
		}
		sum++;
	}

	while((c = getchar()) != '\n'){
		if(c >= 'a' && c <= 'z'){
			temp = c - 'a';
			if(small[temp]>0){
				small[temp] --;
				sum--;
			}else{
				flag = 1;
				no++;
			}
		}else if(c >= 'A' && c <= 'Z'){
			temp = c - 'A';
			if(big[temp]>0){
				big[temp] --;
				sum--;
			}else{
				flag = 1;
				no++;
			}
		}else if(c >= '0' && c <= '9'){
			temp = c - '0';
			if(number[temp]>0){
				number[temp] --;
				sum--;
			}else{
				flag = 1;
				no++;
			}
		}
	}

	if(flag == 0 ){
		cout << "Yes " << sum << endl;
	}else{
		cout << "No " << no << endl;
	}
	return 0;
}
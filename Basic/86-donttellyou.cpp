#include<iostream>

using namespace std;

int main(){
	int a,b,i,j;
	int mul,temp;
	int t[10];
	int p = 0;

	cin >> a >> b;
	mul = a * b;
	i = 0;
	if(mul / 10 == 0){
		cout << mul ;
	}else{
		while(mul / 10 != 0){
			temp = mul%10;
			t[i++] = temp;
			mul = mul/10;
			if(mul/10 == 0){
				t[i] = mul % 10;
			}
		}
		for(j = 0 ; j <= i ;j++){
			if(t[j] != 0){ 
				p++;
			}
			if(p != 0){
				cout << t[j];
			}
		}
	}
	return 0;
}
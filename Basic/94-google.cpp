#include<iostream>
#include<string>
#include<cmath>
#include<stdio.h>

using namespace std;
int isPrime(int n){
	int flag = 0;
	if(n == 1){
		return 0;
	}else{
		for(int i = 2;i <= sqrt(n) ; i++){
			if(n % i == 0){
				flag = 1;
				return 0;
			}
		}
		if(flag == 0){
			return 1;
		}
	}
}

int get_length(int a){
	int i = 0;
	while(a){
		a = a/10;
		i++;
	}
	return i;
}

int main(){
	int length,n,sum;
	int i,j,z;
	int flag = 0;
	string num;

	cin >> length >> n;
	getchar();
	getline(cin,num);
	
	i=0;
	while(i+n<=length){
		sum = 0;
		for(j=i;j<i+n;j++){
			sum = sum * 10 + (num[j] - '0');
		}
		if(isPrime(sum)){
			flag = 1;
			int zero = n - get_length(sum);
			while(zero--){
				cout <<"0";	
			}
			cout << sum;
			break;
		}
		i++;
	}
	if(flag == 0){
		cout << "404" << endl;
	}
	return 0;
}
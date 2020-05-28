/*
	20
	1 3 5 7 11 13 17 19
	3 5
	5 7
	11 13
	17 19
*/

#include<iostream>
#include<cmath>
using namespace std;


int isPrime(int n){
	int i,flag = 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i ==0){
			flag = 1;
			return 0;
		}
	}
	if(flag == 0){
		return 1;
	}
}

int main(){

	int i,n,j=0;
//	int temp[10000];
	int pre = 3;
	int sum = 0;
	cin >> n;
	for(i = 3 ; i <= n ; i++){

		if( isPrime(i)){
		//	cout << pre <<endl;
			if( i!=pre && i-pre == 2){
				sum++;
			}
			pre = i;
			
		}
	}
	cout << sum << endl;
	return 0;

}



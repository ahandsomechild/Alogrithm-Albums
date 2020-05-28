/*
	1 3 5 7 11
*/

#include<iostream>
#include<cmath>
using namespace std;

int isPrime(int n){
	int i,flag = 0;
	for(i=2;i<=sqrt(n);i++){ //解决了超时的问题
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
	int t = 0;
	int m , n , i;

	cin >> m >> n;
	
	i = 2;
	while(t <= n){
		if(isPrime(i)){
			t++;
			if(t >= m){
				cout << i;
				if( t != n && (t-m+1)%10 != 0){
					cout << ' ';
				}
				if((t-m+1)%10 == 0 && t!=m){
					cout << endl;
				}
			}
			if(t == n){
				break;
			}
		}
		i++;
	}
	return 0;
}
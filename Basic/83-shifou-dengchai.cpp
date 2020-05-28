/*
	8
	3 5 8 6 2 1 4 7
	1 2 3 4 5 6 7 8
	2 3 5 2 -3 -5 -3 -1
*/
#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n,i;
	int temp[10000] = {0};
	int a;

	cin >> n;
	for(i=1;i<=n;i++){
		cin >> a;
		temp[abs(a-i)]++;		
	}
	for(i=9999;i>=0;i--){
		if(temp[i] > 1){
			cout << i << " " << temp[i] << endl;
		}
	}
	return 0;
}
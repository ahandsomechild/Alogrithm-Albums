/*
	123
	456

	579
	
*/

#include<iostream>

using namespace std;

int main(){
	int a, b, c;
	int temp, i ,j; 
	int res[100];
	cin >> a >> b >> c;
	temp = a + b;
	i = 0;
	if(temp<c){
		cout << temp;
	}else{
		while(temp/c!=0){
			if(temp/c!=0){
				res[i++] = temp%c;
				temp = temp/c;
			}
		}
		res[i++] = temp;
		for(j = i-1 ; j >= 0 ; j--){
			cout << res[j];
		}
	}
	cout << endl;
	return 0;
}
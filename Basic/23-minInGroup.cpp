#include<iostream>

using namespace std;

int main(){
	int i,j;
	int s[10];
	int tag,flag = 0;
	for(i = 0; i < 10; i++){
		cin >> s[i];
		if(i != 0 && s[i] !=0 && flag == 0){
			tag = i;
			flag = 1;
			s[i]--;
		}
	}
	cout << tag;
	for(i = 0; i < 10; i++){
		if( s[i] != 0){
			for(j = 0; j < s[i]; j++){
				cout << i;
			}
		}
	}
	return 0;
}
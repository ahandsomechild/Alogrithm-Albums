#include<iostream>

using namespace std;

int battle(char a, char b){
	if( (a == 'C' && b == 'C') || (a == 'B' && b == 'B') || (a == 'J' && b == 'J') ){
		return 0;
	}else if((a == 'C' && b == 'J') || (a == 'B' && b == 'C') || (a == 'J' && b == 'B')){
		return 1;
	}else{
		return 2;
	}
}

void max(int a[], int size){
	int flag = 0;
	int max = a[0];
	for(int i = 0; i < size ; i++){
		if(a[i] > max){
			max = a[i];
			flag = i;
		}
	}
	switch(flag){
		case 0:
			cout << 'B' ;
			break;
		case 1:
			cout << "C";
			break;
		case 2:
			cout << "J";
			break;
	}
}
//1×ó±ßÓ®2ÓÒ0Æ½

int main(){
	int i,j;
	int n;
	char jia,yi;
	int temp;
	int sum1 = 0,sum2 = 0,sum3 = 0; //¼×Æ½ÒÒ
	int res1[3] = {0}; //BCJ
	int res2[3] = {0}; //BCJ
	cin >> n;
	for(i=0;i<n;i++){
		cin >> jia >> yi;
		battle(jia,yi);
		if( battle(jia,yi) == 1 ){
			sum1 ++;
			if(jia == 'B'){
				res1[0]++;
			}else if(jia == 'C'){
				res1[1]++;
			}else{
				res1[2]++;
			}
		}else if( battle(jia,yi) == 2 ){
			sum3 ++;
			if(yi == 'B'){
				res2[0]++;
			}else if(yi == 'C'){
				res2[1]++;
			}else{
				res2[2]++;
			}
		}else{
			sum2++;
		}
	}
	cout << sum1 << " " << sum2 << " " << sum3 << endl;
	cout << sum3 << " " << sum2 << " " << sum1 << endl;
	max(res1,3);
	cout << " ";
	max(res2,3);
	return 0;
}
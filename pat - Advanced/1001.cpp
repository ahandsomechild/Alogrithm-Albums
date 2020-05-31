#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,sum;
	int i,j;
	int temp[10];
	cin >> a >> b;
	sum = a + b;
	i=0;
	
	if(sum == 0){
		cout << "0";
	}else{
		if(sum < 0){
			cout << "-";
		}
		while(sum != 0){
			temp[i++] = abs(sum)%10;	
			sum = sum/10;
		}
		for(j=i-1;j>=0;j--){
			cout << temp[j];
			if(j != i && j != 0 && j % 3 == 0){
				cout << ",";
			}
		}
	}
	
	return 0;

}
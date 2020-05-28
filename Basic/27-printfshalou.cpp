#include<iostream>

using namespace std;

void printf(int max , char word){
	int temp;
	int j;
	int space;
	temp = max;
	space = 0;
	while(temp >= 1){
		for(j = 0; j < space; j++){
			cout << " ";
		}
		for(j = 0; j < temp ; j++){
			cout << word;
		}
		cout << endl;
		temp = temp - 2;
		space++;
	}
	temp = 3;
	space = (max-3) / 2;
	//cout << space;
	while(temp <= max){
		for(j = 0; j < space; j++){
			cout << " ";
		}
		for(j = 0; j < temp ; j++){
			cout << word;
		}
		cout << endl;
		temp = temp + 2;
		space -- ;
	}
	
}

int main(){
	int i,j,n;
	char w;
	int sum = 0;
	int res,max;
	cin >> n >> w;
	i = 1;
	while(sum <= n){
		if( i == 1 ){
			sum += i;
		}else{
			sum += (i * 2);
		}
		i = i + 2;
	}
	sum = sum - (i-2)*2;
	res = n - sum;
	max = i - 4;

	printf(max,w);
	cout << res << endl;
	return 0;
}
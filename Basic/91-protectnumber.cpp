#include<iostream>

using namespace std;

int main(){
	int i, j, n;
	int w[20];
	int temp,tag;
	cin >> n;

	for( j = 0 ; j < n ; j++ ){
		cin >> w[j];
		tag = 0;
		for(i = 1 ; i < 10 ; i++){
			if(w[j] < 10){
				temp = i*w[j]*w[j]%10;
			}else if(w[j] < 100 && w[j]>9){
				temp = i*w[j]*w[j]%100;	
			}else if(w[j] < 1000 && w[j]>99){
				temp = i*w[j]*w[j]%1000;
			}
			if(temp == w[j]){
				tag = 1;
				cout << i << ' ' << i*w[j]*w[j] << endl;
				break;
			}
		}
		if(tag == 0){
			cout << "No" << endl;
		}
	} 
	return 0;
}
#include<iostream>
using namespace std;


int main(){
	int i , n;
	int id , score;
	int sum[100000] = {0};
	int temp;

	cin >> n;
	for( i = 1 ; i <= n ; i++){
		cin >> id >> score;
		temp = id;
		sum[temp] += score;
	}
	int max = -1;
	temp = -1;
	for( i = 1 ; i <= n ; i++ ){
		if(sum[i] > max){
			max = sum[i];
			temp = i;
		}
	}
	cout << temp << " " << sum[temp] << endl;
	return 0;
}
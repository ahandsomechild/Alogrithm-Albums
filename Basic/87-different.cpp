#include<iostream>

using namespace std;

int add(int n){
	return n/2 + n/3 + n/5;
}

int main(){
	int N;
	int i = 2;
	int temp;
	int num = 1;

	cin >> N;
	temp = add(1);
	while(i <= N){
		if(add(i) != temp){
			num++;
			temp = add(i);
		}
		i++;
	}
	cout << num << endl;
	return 0;
}
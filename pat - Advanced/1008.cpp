/*
	��������----
	���Ե����ڵ�0��
	������Ҫ6s���½���Ҫ4�룬ÿ��һվ��Ҫͣ5s

	input n������	1...n
 	output ��ʱ��
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	int floor;
	int current = 0; //��ǰ��0��
	int sum = 0;
	cin >> n;
	
	while(n--){
		cin >> floor;
		if(floor > current){
			sum += (abs(floor-current))*6 + 5;
		}else if(floor < current){
			sum += (abs(floor-current))*4 + 5;
		}else{
			sum += 5; 
		}
		current = floor;
	}

	cout << sum;
	return 0;
}
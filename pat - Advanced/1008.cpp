/*
	电梯问题----
	初试电梯在第0层
	上升需要6s，下降需要4秒，每到一站需要停5s

	input n个正数	1...n
 	output 总时间
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	int floor;
	int current = 0; //当前在0层
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
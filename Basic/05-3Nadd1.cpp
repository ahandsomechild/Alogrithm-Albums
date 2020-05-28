/*
input
	6  ------------K (<100)
	3 5 6 7 8 11  n -----------(1<n≤100)
-----------------------------
	(3 5 8 4 2 1)
	(5 (8 4 2 1))
	6 (3 5 8 4 2 1)
	7 (11 17 26 13 20 10 (5 8 4 2 1))
	(8 4 2 1)
	(11 17 26 13 20 10 5 8 4 2 1)
------------------------------
output 7 6
------------------------------
	追溯问题，可以观察到括号中的数是重复的，而output中7 6只出现一次，即 - 根数字
	所以用tag[101]数组标记递归过程中出现的数字出现的次数，初始化为0	
*/

#include<iostream>
#include <algorithm> //C++从大到小排序sort---步骤1
using namespace std;

//C++从大到小排序---步骤2
bool cmp(int a,int b){
	return a > b; //从小到大a<b
}

int main(){
	int num,i;
	int tag[101] = {0},a[101],res[101], t,temp;
	cin >> num;

	for(i = 0; i < num; i++){
		cin >> a[i];
		temp = a[i];
		if(temp == 1){    
			tag[temp] ++ ;
		}else{
			while(temp!=1){
				if(temp<=100){	
					//这里需要判断一下，不然会出现段错误，即在递归的过程中会出现大于100的数，
					//但是输入的数在[1,100]区间，所以不用管那些大于100的数，我们需要的是在输入的数中找本源
					tag[temp]++;
				}
				if(temp%2 == 0){
					temp = temp/2;
				}else{
					temp = (temp*3+1)/2;
				}
			}
		}
	}
	int sum = 0,j = 0;;
	for(i = 0; i < num; i++ ){
		t = a[i];
		if(tag[t] == 1){
			res[j++] = t;
			sum++;

		}
	}
	sort(res,res+j,cmp);//C++从大到小排序---步骤3
	for(i = 0; i < j; i++ ){
		cout << res[i];
		if(i<j-1){
			cout <<" ";
		}
	}
}
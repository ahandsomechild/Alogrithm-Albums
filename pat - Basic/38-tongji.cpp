/*
	运行超时
	1.score[100001]  -  >  [101]
	2.c++ --->   c  
*/

#include<stdio.h>

int main(){
	int i,j,n;
	int score[101] = {0}; // 0-100分
	int num,sum;
	int temp;

	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%d",&temp);
		score[temp] ++ ;
	}
	scanf("%d",&num);
	while(num--){
		scanf("%d",&temp);
		printf("%d",score[temp]);
		if(num > 0){
			printf(" ");
		}
	}
	
	return 0;
}
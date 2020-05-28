#include<stdio.h>
#define CLK_TCK 100
int main(){
	int c1,c2;
	scanf("%d %d",&c1,&c2);
	int res = c2-c1;
	if(res % CLK_TCK >= (CLK_TCK/2)){	
		res = res / CLK_TCK +1;
	}else{
		res = res / CLK_TCK;
	}
	printf("%02d:%02d:%02d\n",res/3600,res%3600/60,res%60);
	return 0;
}
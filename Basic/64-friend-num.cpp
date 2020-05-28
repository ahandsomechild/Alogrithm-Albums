#include<stdio.h>

//10000
//9999 36 0-36
int main(){
	int n,i;
	int temp[38] = {0};
	int t,sum = 0;
	
	scanf("%d",&n);
	i=0;
	while(n--){
		scanf("%d",&t);
		sum = 0;
		while(t!=0){
			sum += t%10;
			t = t/10;
		}
		temp[sum]++;
	}
	int num = 0;
	for(i=0;i<38;i++){
		if(temp[i]>0){
			num++;
		}
	}
	printf("%d\n",num);
	for(i=0;i<38;i++){
		
		if(temp[i]>0){
			num--;
		    printf("%d",i);
			if(num>0){
				printf(" ");
			}
		}
	}
	
	return 0;
}
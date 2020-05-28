#include<stdio.h>

int main(){
	int num;
	int bai=-1,shi=-1,ge;
	scanf("%d",&num);
	if(num>=100){
		shi = (num/10)%10;
		bai = num/100;
	}else if(num>=10){
		shi = num / 10;
	}
	ge = num % 10;
	if(bai!=-1){
		while(bai>0){
			printf("B");
			bai--;
		}
	}
	if(shi!=-1){
		while(shi>0){
			printf("S");
			shi--;
		}
	}
	for(int i=1;i<=ge;i++){
		printf("%d",i);
	}
	printf("\n");

}
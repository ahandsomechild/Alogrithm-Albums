#include <stdio.h>
int main(){
	char num[10000];
	int i=0, j=0, sum=0;
	int temp[5];
	scanf("%s",num);
	while(num[i] >= '0' && num[i] <= '9'){
		sum += (num[i] - '0');
		i++;
	}
	printf("%d\n",sum);
	while(sum){
		temp[j++] = sum%10;
		sum = sum / 10;
	}
	for(i=j-1;i>=0;i--){
		switch(temp[i]){
			case 0:
			printf("ling");
			break;
			case 1:
			printf("yi");
			break;
			case 2:
			printf("er");
			break;
			case 3:
			printf("san");
			break;
			case 4:
			printf("si");
			break;
			case 5:
			printf("wu");
			break;
			case 6:
			printf("liu");
			break;
			case 7:
			printf("qi");
			break;
			case 8:
			printf("ba");
			break;
			case 9:
			printf("jiu");
			break;
			default:
				break;
		}
		if(i!=0){
			printf(" ");
		}else{
			printf("\n");
		}
	}
	
}

#include<stdio.h>
#include<string.h>

struct identity{
	char number[18];
	int tag;
};

int main(){
	char m[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
	int z[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
	int n,i,j,sum = 0,flag = 0;
	int len;
	struct identity iden[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum = 0;
		scanf("%s",iden[i].number);
		for(j=0;j<17;j++){
			sum+= ((iden[i].number[j] - '0')*z[j]);
		}
		sum = sum % 11;
		if(m[sum] == iden[i].number[17]){
			iden[i].tag = 1;
		}else{
			iden[i].tag = 0;
		}
	}
	for(i=0;i<n;i++){
		if(iden[i].tag == 0){
			printf("%s\n",iden[i].number);
			flag = 1;
		}
	}
	if(flag == 0){
		printf("All passed\n");
	}
}
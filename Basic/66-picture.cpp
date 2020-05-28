#include<stdio.h>

int main(){
	int m,n;
	int a,b;
	int temp,gray[501][501];
	int i,j;
	scanf("%d %d %d %d %d",&m,&n,&a,&b,&temp);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&gray[i][j]);
			if(gray[i][j]>=a && gray[i][j] <= b){
				gray[i][j] = temp;
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%03d",gray[i][j]);
			if(j != n-1){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
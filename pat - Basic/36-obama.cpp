#include<stdio.h>
#include<math.h>

int main(){
	int n;
	char a;
	int i,j,m;
	int row;

	scanf("%d %c",&n,&a);
	if(n%2 == 0){
		row = n/2;
	}else{
		row = n/2 + 1;
	}
	
	
	for(i=0;i<n;i++){
		printf("%c",a);
	}
	printf("\n");
	for(j=0;j<row-2;j++){
		printf("%c",a);
		for(m=0;m<n-2;m++){
			printf(" ");
		}
		printf("%c\n",a);
	}
	for(i=0;i<n;i++){
		printf("%c",a);
	}
	printf("\n");
	return 0;
}
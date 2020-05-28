#include<stdio.h>

int main(){
	int n,i,j;
	int temp,sum = 0,a[10];

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j!=i){
				temp = a[i]*10+a[j];
				sum += temp;
			}
		}
	}

	printf("%d\n",sum);
	return 0;
}
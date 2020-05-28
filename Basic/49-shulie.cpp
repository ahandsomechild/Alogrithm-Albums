#include<stdio.h>
 /*
	1 2 3 4
	
	1 
	1 2 
	1 2 3 
	1 2 3 4		n = 4
	2			n-1 = 4
	2 3			n-2 = 3+3
	2 3 4		n-3 = 2+2+2
	3			n-4 = 1+1+1+1
	3 4 
	4
*/


int main(){
	int i,j,n;
	double sum = 0;	
	double temp;

	scanf("%d",&n);
	j=n;
	for(i=1;i<=n;i++){
		scanf("%lf",&temp);
		sum += (temp * i * j);
		j--;
	}
	printf("%.02lf",sum);
	return 0;
}
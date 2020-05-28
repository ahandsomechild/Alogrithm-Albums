#include<stdio.h>
#include<math.h>

int main(){
	int i,j,n;
	int a,b;
	double temp[10001];
	
	scanf("%d",&n);
	j=0;
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		temp[j++] = sqrt(a*a+b*b);
	}
	double max = temp[0];
	for(i=0;i<n;i++){
		if(temp[i] > max){
			max = temp[i];  
		}
	}
	printf("%.02lf",max);
	return 0;
}
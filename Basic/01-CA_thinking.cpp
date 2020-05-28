#include <stdio.h>

int CA_thinking(int n, int i){
	if(n!=1){
		i++;
		if(n%2==0){
			CA_thinking(n/2,i);
		}else{
			CA_thinking((3*n+1)/2,i);
		}
	}else{
		return i;
	}
}

void main(){
	int n,result;
	scanf("%d",&n);
	result=CA_thinking(n,0);
	printf("%d\n",result);
}

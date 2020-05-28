#include<stdio.h>
#include<math.h>
int isPrime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}	
	}
	return 1;
}

int main(){
	int n,num;
	int i,j;
	int rank[10001];
	int isChecked[10001] = {0};
	int flag = 0;
	int temp;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&rank[i]);
	}
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d",&temp);
		flag = 0;
		for(j=0;j<n;j++){
			if(rank[j] == temp){
				flag = 1;
				if(isChecked[j]){
					printf("%04d: Checked\n",temp);
					break;
				}else{
					isChecked[j] = 1;
				}
				if(j==0){
					printf("%04d: Mystery Award\n",temp);
				}else if(isPrime(j+1)){
					printf("%04d: Minion\n",temp);
				}else{
					printf("%04d: Chocolate\n",temp);
				}
			}
		}
		if(flag == 0){
			printf("%04d: Are you kidding?\n",temp);
		}
	}
	return 0;
}
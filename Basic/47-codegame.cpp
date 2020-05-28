#include<stdio.h>

int main(){
	int n,i;
	scanf("%d",&n);
	int group[1001] = {0};
	int gid,pid,score;
	for(i=0;i<n;i++){
		scanf("%d-%d %d",&gid,&pid,&score);
		group[gid] += score;
	}
	int max = group[0];
	int flag = 0;
	for(i=0;i<1001;i++){
		if(group[i]>max){
			max = group[i];
			flag = i;
		}
	}

	printf("%d %d",flag,max);
}
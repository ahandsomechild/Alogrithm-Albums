#include<stdio.h>
#include<string.h>

int main(){
	int n,m;
	int i,j;
	int id[7];
	char name[1001][4];
	int thing[1001][11] = {0};
	int num;
	int x,y,res[6],flag = 0;
	int stu_count = 0 , thing_count = 0;

	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++){
		scanf("%d",&id[i]);
	}
	for(i=0;i<n;i++){
		scanf("%s %d",name[i],&num);
		flag = 0;
		x=0;
		memset( res, 0, sizeof(res) );
		for(j=0;j<num;j++){
			scanf("%d",&thing[i][j]);
			for(y=0;y<m;y++){
				if(thing[i][j] == id[y]){
					flag = 1;
					thing_count++;
					res[x++] = id[y];
				}
			}
		}
		if(flag == 1){
			stu_count++;
			printf("%s: ",name[i]);
			for(j=0;j<x;j++){
				printf("%04d",res[j]);
				if(j != x-1){
					printf(" ");
				}else{
					printf("\n");
				}
			}
		}
	}
	printf("%d %d",stu_count,thing_count);


	return 0;

}
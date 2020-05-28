/**/

#include<stdio.h>
#include<string.h>

int main(){
	int m,n,s;
	int i,j,flag,tt;
	char str[1001][21];
	int t[1001];
	scanf("%d %d %d",&m,&n,&s);

	for(i=0;i<m;i++){
		scanf("%s",str[i]);
	}
	j=0;
	if(s > m){
		printf("Keep going...\n"); 
	}else{
		while(s <= m){
			flag = 0; 
			for(i=0;i<j;i++){
				tt = t[i];
				if(strcmp(str[tt],str[s-1]) == 0){
					flag = 1;
				}
			}
			if(flag == 1){
				s++;
			}else{
				t[j++] = s-1;
				printf("%s\n",str[s-1]);
				s += n;
			}
		}
	}
	return 0;
}
#include<stdio.h>
#include<string.h>

int main(){
	char a[1000];
	int flag,len,i;
	int num[10] = {0,0,0,0,0,0,0,0,0,0};
	scanf("%s",a);
	len = strlen(a);
	for(i=0;i<len;i++){
		flag = a[i]-'0';
		num[flag]++;
	}
	for(i=0;i<10;i++){
		if(num[i]>0){
			printf("%d:%d\n",i,num[i]);
		}
	}
	return 0;
}
#include<stdio.h>
#include<string.h>

int helper(int a, int b){
	int i;
	int sum=0,flag=1;
	for(i=0;i<b;i++){
		sum += flag*a;
		flag*=10;
	}
	return sum;
}

int main(){
	char a[20], b[20];
	int da, db, i;
	int alen,blen;
	int anum = 0,bnum = 0;
	scanf("%s %d %s %d",a,&da,b,&db);
	alen = strlen(a);
	blen = strlen(b);
	for(i=0;i<alen;i++){
		if(a[i]-'0' == da){
			anum++;
		}
	}
	for(i=0;i<blen;i++){
		if(b[i]-'0' == db){
			bnum++;
		}
	}
	
	printf("%d\n",helper(da,anum) + helper(db,bnum));
	return 0;
}
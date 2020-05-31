#include<stdio.h> 

int main()
{	
	int n,cnt=0;
	scanf("%d",&n);
	struct birth{
		char name[6];
		int y;
		int m;
		int d;
	}a,max,min;

	max.y=2014;max.m=9;max.d=7;
	min.y=1814;max.m=9;max.d=5;	
	for(int i = 0;i<n;i++){
		scanf("%s %d/%d/%d",&a.name,&a.y,&a.m,&a.d);
		cnt++;
		if(a.y>2014||(a.y==2014&&a.m>9)||(a.y==2014&&a.m==9&&a.d>6)||a.y<1814||(a.y==1814&&a.m<9)||(a.y==1814&&a.m==9&&a.d<6)){
			cnt--;
			continue;
		}
		if(a.y<max.y||(a.y==max.y&&a.m<max.m)||(a.y==max.y&&a.m==max.m&&a.d<max.d)){
			max=a;
		}
		if(a.y>min.y||(a.y==min.y&&a.m>min.m)||(a.y==min.y&&a.m==min.m&&a.d>min.d)){
			min=a;
		}
	}
	printf("%d",cnt);
	if(cnt!=0){
		printf(" %s %s",max.name,min.name);
	}
	
	return 0;
 } 

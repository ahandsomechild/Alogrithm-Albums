#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
const int maxn=1e9+5;

int N;
bool a[maxn]={false};
void begin()
{
	//memset(a,0,sizeof(a));
	int cnt=0;
	for(int i=1;i<maxn;i+=cnt)
	{
		a[i]=true;
		cnt++;
	}
}

int main()
{
	begin();
	while(scanf("%d",&N)!=EOF)
	{
		for(int i=0;i<N;i++)
		{
			int x;
			scanf("%d",&x);
		    printf("%d\n",a[x]);
		}
	}
	return 0;
}
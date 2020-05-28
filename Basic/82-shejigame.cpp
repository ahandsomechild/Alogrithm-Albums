#include<stdio.h>
#include<math.h>

int main(){
	int i,n;
	int id, x, y;
	int max, max_f;
	int min, min_f;
	int temp;

	scanf("%d",&n);
	scanf("%d %d %d",&id,&x,&y);
	temp = abs(x)*abs(x) + abs(y)*abs(y);
	max = min = temp;
	max_f = min_f = id;

	int j = n-1;
	while(j--){
		scanf("%d %d %d",&id,&x,&y);
		temp = abs(x)*abs(x) + abs(y)*abs(y);
		if(temp > max){
			max = temp;
			max_f = id;
		}
		if(temp < min){
			min = temp;
			min_f = id;
		}
	}

	printf("%04d %04d",min_f,max_f);

	
	return 0;
}
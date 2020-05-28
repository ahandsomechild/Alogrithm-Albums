#include<stdio.h>
#include<math.h>

int main(){
	int m,n,tol;
	int i,j;
	int a[1001][1001];
	int sum = 0;
	int t1,t2,temp,flag;
	
	scanf("%d %d %d",&m,&n,&tol);

	/*for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			flag = 0;
			if(i-1 >= 0){
				if(abs(a[i-1][j] - a[i][j]) <= tol){
					flag = 1;
				}
			}
			if(i+1 < n){
				if(abs(a[i+1][j] - a[i][j]) <= tol){
					flag = 1;
				}
			}
			if(j-1 >= 0){
				if(abs(a[i][j-1] - a[i][j]) <= tol){
					flag = 1;
				}
			}
			if(j+1 < m){
				if(abs(a[i][j+1] - a[i][j]) <= tol){
					flag = 1;
				}
			}

			if(flag == 0){
				sum ++;
				if(sum > 1){
					printf("Not Unique\n"); 
					break;
				}
				t1 = i+1;
				t2 = j+1;
				temp = a[i][j];
			}
		}
	}
	if(sum == 1){
		printf("(%d, %d): %d\n",t1,t2,temp);
	}else if(sum == 0){
		printf("Not Exist\n"); 
	}*/
	return 0;
}
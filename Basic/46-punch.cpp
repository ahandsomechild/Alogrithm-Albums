#include<stdio.h>

int game(int a1, int a2, int b1, int b2){
	int sum1; //����������֮��
	int aw = 0, bw = 0; //����Ӯ�ô���
	sum1 = a1 + b1;
	if( (a2 != sum1 && b2 != sum1) || (a2 == sum1 && b2==sum1) ){
		return 0;	
	}else if(a2 == sum1 && b2!=sum1){
		return 1;	//��Ӯ��
	}else if(a2 != sum1 && b2==sum1){
		return 2;   //��Ӯ��
	}
}

int main(){
	int n,i,j;
	int a[100][4];
	int aj=0,bj=0;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<n;i++){
		if( game(a[i][0],a[i][1],a[i][2],a[i][3]) == 1 ){
			bj++;
		}else if( game(a[i][0],a[i][1],a[i][2],a[i][3]) == 2 ){
			aj++;
		}
	}

	printf("%d %d\n",aj,bj);
}
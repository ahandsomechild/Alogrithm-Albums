#include<iostream>
using namespace std;
/*≤‚ ‘µ„ŒÂ 6174*/
int sort(int num,char type){
	int i,j;
	int temp;
	int a[4];
	a[0] = num/1000;
	a[1] = num/100%10;
	a[2] = num/10%10;
	a[3] = num%10;
	if(type == 'A'){ // sheng
		for(i = 0; i < 4; i ++){
			for( j= i+1; j < 4; j++ ){
				if(a[i]>a[j]){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}	
		}
	}else if(type == 'D'){ // jiang
		for(i = 0; i < 4; i ++){
			for( j= i+1; j < 4; j++ ){
				if(a[i]<a[j]){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}	
		}
	}
	temp = a[0]*1000+a[1]*100+a[2]*10+a[3];
	return temp;
}

int main(){
	int num,temp;
	int a[4];
	int i;
	int m,n;
	cin >> num;
	m = sort(num,'D');
	n = sort(num,'A');
	if(n == m && num != 0){
		printf("%04d - %04d = 0000\n",num,num);
	}else{
		temp = m - n;
		if(num == temp){
			printf("%04d - %04d = %04d\n",m,n,temp);
		}else{
			while( num != temp){
				printf("%04d - %04d = %04d\n",m,n,temp);
				num = temp;
				m = sort(num,'D');
				n = sort(num,'A');
				temp = m - n;
			}
		}
	}
	return 0;
}
#include<iostream>

using namespace std;

int main(){
	int n,m,i,j;
	double g1,g2[100],sum,avg;
	double max,min;
	int num;
	int flag; //标记第一个合法分数

	cin >> n >> m;
	for(i=0;i<n;i++){
		sum = 0;
		num = 0;
		flag = 0;
		cin >> g1;
		for(j=0;j<n-1;j++){
			cin >> g2[j];
			if(g2[j]>=0 && g2[j]<= m){
				sum += g2[j];
				num ++;
				if(flag == 0){
					flag = 1;
					max = min = g2[j];
				}else{
					if(g2[j]>max){
						max = g2[j];
					}
					if(g2[j]<min){
						min = g2[j];
					}
				}
			}
			
		}
	//	cout << "sum---" << sum << " num -- " << num << endl;
	//	cout << "max---" << max << " min -- " << min << endl;
		sum = sum - max - min;
		num -= 2;
		avg = ( g1 + (sum/(num*1.0)) )/2;
		if( (int)(avg*10) %10 >=5 ){
			cout << (int)avg + 1 << endl;
		}else{
			cout << (int)avg << endl;
		}
	}

	return 0;
}
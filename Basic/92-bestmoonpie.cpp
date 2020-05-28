#include<iostream>

using namespace std;

int main(){
	int n,m,i,j;
	int a[100][1000];
	cin >> n >> m;
	int temp[1000];
	int res[1000];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	for(i=0;i<n;i++){
		temp[i] = 0;
		for(j=0;j<m;j++){
			temp[i] += a[j][i];
		}
	}
	int max = temp[0];
	int tag = 0;
	for(i=0;i<n;i++){
		if(temp[i]>max){
			max = temp[i];
			tag = i;
		}
	}
	cout << max << endl;
	j=0;
	for(i=0;i<n;i++){
		if(temp[i] == max){
			res[j++] = i+1;	
		}
	}
	for(i=0;i<j;i++){
		cout << res[i];
		if(i!=j-1){
			cout << " ";
		}
	}
	return 0;
}
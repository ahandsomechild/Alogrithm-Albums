#include <iostream>

using namespace std;

int main(){
	int n,m,i,j;
	int score[100];
	int ans[100];
	int stu[100][100];
	int sum = 0;
	cin >> n >> m;
	for(i=0;i<m;i++){
		cin >> score[i];
	}
	for(i=0;i<m;i++){
		cin >> ans[i];
	}
	for(i=0;i<n;i++){
		sum = 0;
		for(j=0;j<m;j++){
			cin >> stu[i][j]; 
			if(stu[i][j] == ans[j]){
				sum += score[j];
			}
		}
		cout << sum << endl;
	}
	return 0;
}
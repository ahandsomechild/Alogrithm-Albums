#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,m,i,j,x,y;
	cin >> n >> m;
	int score[101]; //每道题的分数
	int num[101]; //每道题的选择数量
	int right_num[101]; //每道题正确的选项数量
	char right[101][6]; //正确的选择
	int error[101] = {0}; //每道题错误的数量
	char temp[6];
	int temp_num;
	int flag;

	char w1 = '(',w2 = ')';

	for(i = 0; i < m; i++){
		cin >> score[i];
		cin >> num[i];
		cin >> right_num[i];
		for( j = 0; j < right_num[i]; j++){
			cin >> right[i][j];
		}
	}
	for( i = 0; i < n; i++ ){
		int sum = 0;
		for( j = 0; j < m; j++ ){
			flag = 0;
			cin >> w1 >> temp_num;
			for(x=0;x<temp_num;x++){
				if(x == temp_num-1){
					cin >> temp[x] >> w2;
				}else{
					cin >> temp[x];
				}
				if(temp_num == right_num[j]){
					if(temp[x] != right[j][x]){
						flag = 1;
					}
				}else{
					flag = 1;
				}
			}
			if(flag == 0){
				sum += score[j];
			}else{
				error[j]++;
			}

		}

		cout << sum << endl;
	}
	int tag = 0;
	int max = error[0];
	int res[6];
	for(i=0;i<m;i++){
	//	cout << "e---" << error[i] << endl;
		if(error[i] > max){
			max = error[i];
		}
		if(error[i] != 0){
			tag = 1;
		}
	}
	if(tag == 0){
		cout << "Too simple";
	}else{
		cout << max << " ";
		y = 0;
		for(i=0;i<m;i++){
			if(error[i] == max){
				res[y++] = i+1;
			}
		}
		for(i=0;i<y;i++){
			cout << res[i];
			if(i != y-1){
				cout <<" ";
			}
		}
	}
	return 0;
}

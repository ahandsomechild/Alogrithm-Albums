#include<iostream>

using namespace std;

int code(char a){
	switch(a){
		case 'A':
			return 1;
			break;
		case 'B':
			return 2;
			break;
		case 'C':
			return 3;
			break;
		case 'D':
			return 4;
			break;
	}
}

int main(){
	int n,i,j,m;
	char b = '-';
	char t1,t2;
	int res[100];
	cin >> n;
	m = 0;
	for( i = 0 ; i < n ; i++ ){
		for( j = 0 ; j < 4 ; j++ ){
			cin >> t1 >> b >> t2 ;
			if(t2 == 'T'){
				res[m++] = code(t1);
			}
		}
	}
	for( i = 0 ; i < m ; i++){
		cout << res[i];
	}
	cout << endl;
	return 0;
}
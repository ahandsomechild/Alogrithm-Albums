#include<iostream>
#include<string>
using namespace std;
int main()
{   
	int i,m,n;
    char str[81];
	string t;
	char temp[80][80];
	cin.get(str,81);
	
	m = 0 ; n = 0 ;
	for(i=0;i<81;i++){
		
		cout << t;
		if(str[i] == ' '){
			temp[m][n] = '\0';
			m++;
			n = 0;
		}else if(str[i] == '\0'){
			temp[m][n] = '\0';
			break;
		}else{
			temp[m][n] = str[i];
			n++;
		}
	}
	for(i = m; i >= 0 ; i--){
		cout << temp[i];
		if(i != 0){
			cout << " ";
		}
	}
	cout << endl;
	
    return 0;
}
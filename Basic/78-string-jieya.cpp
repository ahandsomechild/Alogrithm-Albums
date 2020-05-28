#include<iostream>
#include<cctype>
#include<string>
#include<string.h>
using namespace std;

int main(){
	char c;	
	int i,j,z,num,sum;
	char temp;

	cin >> c;
	getchar();
	
	string a;
	getline(cin,a);

	i=0;
	num=0;
	temp = a[0];
	if(c == 'C'){ //Ñ¹Ëõ
		while(a[i]!='\0'){
			if(a[i] == temp){
				num++;
			}else{
				
				if(num>1){
					cout << num;
					num = 1;
				}
				cout << temp; 
				temp = a[i];
			}
			i++;
		}
		cout << temp;
	}

	i=0;
	j=0;
	sum = 0;	
	if(c == 'D'){
		while(a[i]!='\0'){
			if(temp >='0' && temp <= '9'){
				sum = sum * 10 + (temp - '0');
				
			}else{
				if(sum!=0){	
					while(sum--){
						cout << temp;
					}
					sum = 0;
				}else{
					cout << temp;	
				}
			}
			temp = a[i+1];
			i++;
		}
	}
	cout << endl;
	return 0;
}


#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	int i,j,z;
	char leftw,rightw;
	char number[99999]; //²âÊÔµãÎå
	cin >> s;
	i = 0;
	j = 0;
	while(s[i] != 'E'){
		leftw = s[0];
		if(s[i] >= '0' && s[i] <= '9'){
			number[j++] = s[i];
		}
		i++;
	}
	rightw = s[i+1];
	int sum = 0,num = 1;
	for(z = s.length() - 1 ; z >= i+2 ; z--){
		sum += (s[z] - '0')*num;
		num *= 10;
	}
	if(rightw == '+'){ 
		if(leftw == '-'){
			cout << "-";
		}
		int l1 = (sum+1)>(j)?(sum+1):(j); 
		for(z = 0;z<l1;z++){
			if(z == sum+1 && sum < j+1){
					cout <<".";
			}
			if(number[z]>='0' && number[z] <= '9'){
				cout << number[z];
			}else{
				cout << "0";
			}
		}
	}else if(rightw == '-'){
		if(leftw == '-'){
			cout << "-";
		}
		cout << "0.";
		for(z = 0; z < sum-1; z++){
			cout << "0";
		}
		for(z = 0;z < j ;z++){
			cout << number[z];
		}
	}
	return 0;
}
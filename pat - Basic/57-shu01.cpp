#include<iostream>

using namespace std;

int main(){
	char s[100001];

	cin.get(s,100001);

	int i = 0;
	int sum = 0;

	int n1 = 0; //0
	int n2 = 0; //1

	while(s[i] != '\0'){
		if(s[i] >= 'a' && s[i] <= 'z'){
			sum += ( s[i] - 'a' + 1 );
		}else if(s[i] >= 'A' && s[i] <= 'Z'){
			sum += ( s[i] - 'A' + 1 );
		}
		i++;
	}
	if(sum == 1){
		cout << "0 1" << endl;
	}else{ 
		//转进制写法
		while(sum != 0){
			if(sum % 2 == 0){
				n1++;
			}else{
				n2++;
			}
			sum /= 2;
		}
		cout << n1 << " " << n2 << endl;
	}
	
	return 0;
}
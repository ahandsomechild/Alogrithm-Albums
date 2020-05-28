#include<iostream>
#include<string>

using namespace std;

void Week(int n){
	switch(n){
		case 1:cout<<"MON"<<' ';break;
		case 2:cout<<"TUE"<<' ';break;
		case 3:cout<<"WED"<<' ';break;
		case 4:cout<<"THU"<<' ';break;
		case 5:cout<<"FRI"<<' ';break;
		case 6:cout<<"SAT"<<' ';break;
		case 7:cout<<"SUN"<<' ';break;
	}
}

int main(){
	string s1,s2,s3,s4;
	int i = 0;
	int t = 0;
	cin >> s1 >> s2 >> s3 >> s4;
	while(i<s1.length()&&i<s2.length()){
		if( s1[i] == s2[i] ){
			if(t == 1){
				if(s1[i] >= '0' && s1[i] <= '9'){
					cout << '0';
					cout << s1[i]-'0' << ':';
					break;
				}else if(s1[i]>='A'&&s1[i]<='N'){
					cout << s1[i]-'A'+10 << ':';
					break;
				}
			}
			if(t == 0  && s1[i] >='A' && s1[i] <= 'G'){
				Week(s1[i]-'A'+1);
					t = 1;
			}
		}
		i++;
	}
	i=0;
	while(i<s3.length() && i<s4.length()){
		if(s3[i] == s4[i] && ((s3[i] >='a' && s3[i] <= 'z')|| (s3[i] >='A' && s3[i] <= 'Z'))){
			printf("%02d",i);
			break;
		}
		i++;
	}
	return 0;
}
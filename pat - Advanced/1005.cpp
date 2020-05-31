#include<iostream>
#include<string>
using namespace std;

int main(){
	string a;
	int res[102];
	int i,temp,sum = 0;
	getline(cin,a);
	i=0;
	while(i<a.size()){
		if(a[i] >= '0' && a[i] <= '9'){
			temp = a[i] - '0';
			sum += temp;
		}
		i++;
	}
	i=0;
	if(sum == 0){
		cout << "zero" << endl;
	}else{
		while(sum){
			res[i++] = sum%10;
			sum = sum / 10;
		}

		for(int j=i-1;j>=0;j--){
			switch(res[j]){
				case 0:
					cout << "zero";
					if(j>0){
						cout << " ";
					}
					break;
				case 1:
					cout << "one";
					if(j>0){
						cout << " ";
					}
					break;
				case 2:
					cout << "two";
					if(j>0){
						cout << " ";
					}
					break;
				case 3:
					cout << "three";
					if(j>0){
						cout << " ";
					}
					break;
				case 4:
					cout << "four";
					if(j>0){
						cout << " ";
					}
					break;
				case 5:
					cout << "five";
					if(j>0){
						cout << " ";
					}
					break;
				case 6:
					cout << "six";
					if(j>0){
						cout << " ";
					}
					break;
				case 7:
					cout << "seven";
					if(j>0){
						cout << " ";
					}
					break;
				case 8:
					cout << "eight";
					if(j>0){
						cout << " ";
					}
					break;
				case 9:
					cout << "nine";
					if(j>0){
						cout << " ";
					}
					break;
			}
		}
		cout << endl;
	}
	
	return 0;
}
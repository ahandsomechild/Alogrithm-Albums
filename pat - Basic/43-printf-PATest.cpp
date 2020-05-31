#include<iostream>

using namespace std;

int main(){
	char str[10001];
	int P = 0,A = 0,T = 0,e = 0,s = 0,t = 0;
	cin.get(str,10001);
	int i=0;
	int sum=0;

	while(str[i] != '\0'){
		switch(str[i]){
			case 'P':
				P++;
				sum++;
				break;
			case 'A':
				A++;
				sum++;
				break;
			case 'T':
				T++;
				sum++;
				break;
			case 'e':
				e++;
				sum++;
				break;
			case 's':
				s++;
				sum++;
				break;
			case 't':
				t++;
				sum++;
				break;
			default:
				break;
		}

		i++;
	}

	while(sum--){
		if(P>0){
			cout << "P";
			P--;
		}
		if(A>0){
			cout << "A";
			A--;
		}
		if(T>0){
			cout << "T";
			T--;
		}
		if(e>0){
			cout << "e";
			e--;
		}
		if(s>0){
			cout << "s";
			s--;
		}
		if(t>0){
			cout << "t";
			t--;
		}
	}
	cout << endl;
	return 0;
}
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n,i;
	int a[1000];
	int a1 = 0; //A1
	int t1 = 0;
	int a2 = 0; //A2
	int t2 = 0;
	int a3 = 0; //A3
	int t3 = 0;
	double a4 = 0; //A4
	int t4 = 0; 
	int a5 = 0; //A5
	int t5 = 0;
	cin >> n;
	for( i = 0 ; i < n ; i++ ){
		cin >> a[i];
		if( a[i] % 5 == 0 && a[i] % 2 == 0){
			t1++;
			a1 += a[i];
		}else if( a[i] % 5 == 1 ){
			if(t2%2 == 0){
				a2 += a[i];
			}else{
				a2 -= a[i];
			}
			t2++;
		}else if( a[i] % 5 == 2 ){
			t3++;
			a3++;
		}else if( a[i] % 5 == 3 ){
			a4 += a[i];
			t4++;
		}else if( a[i] % 5 == 4 ){
			if(a[i] > a5){
				a5 = a[i];
				t5++;
			}
		}
	}
	
	if(t1 == 0){
		cout << "N" << " ";
	}else{
		cout << a1 << " ";
	}
	if(t2 == 0){
		cout << "N" << " ";
	}else{
		cout << a2 << " ";
	}
	if(t3 == 0){
		cout << "N" << " ";
	}else{
		cout << a3 << " ";
	}
	if(t4 == 0){
		cout << "N" << " ";
	}else{
		a4 = a4 / t4 *1.0;
		//printf("lf ",a4);
		cout << setiosflags(ios::fixed) << setprecision(1) << a4 << " ";
	}
	if(t5 == 0){
		cout << "N";
	}else{
	 cout << a5; 
	}
	return 0;
}
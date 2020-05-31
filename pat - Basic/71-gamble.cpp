#include<iostream>

using namespace std;

int main(){
	int money, n; // 
	int i,j;
	int n1,b,t,n2;

	cin >> money >> n;
	for(i=0;i<n;i++){
		cin >> n1 >> b >> t >> n2;
		if(money == 0){
			cout << "Game Over." << endl;
			break;
		}
		if(t > money){
			cout << "Not enough tokens.  Total = " << money << "." << endl;
		}else{
			if(b == 0 && n2 < n1){
				money += t;
				cout << "Win " << t << "!  " << "Total = " << money << "." << endl;
			}else if(b == 1 && n2 > n1){
				money += t;
				cout << "Win " << t << "!  " << "Total = " << money << "." << endl;
			}else{
				money -= t;
				cout << "Lose " << t << ".  " << "Total = " << money << "." << endl;
			}
		}
	}
}
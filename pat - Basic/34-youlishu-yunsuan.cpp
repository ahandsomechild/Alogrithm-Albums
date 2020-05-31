#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;

long long int gcd(long long int a,long long int b){ 
	//最大公约数
	//最小公倍数 = a * b / 最大公约数
    return b == 0 ? a : gcd(b, a % b);
}
void simple(long long int child,long long int mother){
	long long int t;
	long long int g = gcd(abs(child),mother);
	if(child < 0){ cout << "("; }
	if(abs(child) > mother && child % mother != 0){
		cout << child/mother << " ";
		t = abs(child) - abs(child)/mother*mother;
		cout << t / gcd(t,mother) << "/" << mother / gcd(t,mother);
	}else if(child % mother == 0){
		cout << child / mother ;
	}else{
		cout << child / g << "/" << mother / g ;
	}
	if(child < 0){ cout << ")"; }

}

int main(){
	long long int a ,b;
	char w = '/';
	long long int lchild,lmom,rchild,rmom;
	cin >> lchild >> w >> lmom >> rchild >> w >> rmom;

	long long int lg = gcd(lchild,lmom);
	long long int rg = gcd(rchild,rmom);
	long long int temp; //最小公倍数
	temp = lmom * rmom / gcd(lmom, rmom);
	long long int result;
	for(int i = 0; i < 4; i++){
		simple(lchild,lmom);
		switch(i){
			case 0:
				cout << " + ";
				break;
			case 1:
				cout << " - ";
				break;
			case 2:
				cout << " * ";
				break;
			case 3:
				cout << " / ";
				break;
		}
		simple(rchild,rmom);
		cout << " = ";
		
		switch(i){
			case 0: // +
				result = (temp/lmom*lchild) + (temp/rmom*rchild);
				simple(result,temp);
				break;
			case 1: //-
				result = (temp/lmom*lchild) - (temp/rmom*rchild);
				simple(result,temp);
				break;
			case 2: //*
				result = (temp/lmom*lchild) * (temp/rmom*rchild);
				simple(lchild * rchild,lmom * rmom);
				break;
			case 3: // /
				if(rchild == 0 || lmom == 0 || rmom == 0){
					cout << "Inf";
				}else{
					if((lchild < 0 && rchild >0) || (lchild > 0 && rchild <0)){
						result = abs(lchild) * abs(rmom) * (-1);
					}else{
						result = abs(lchild) * abs(rmom);
					}
					simple(result, abs(rchild) * abs(lmom));
				}
				break;
		}
		
		cout << endl;
	}
		

	
	return 0;
}
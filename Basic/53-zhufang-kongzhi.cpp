#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n,d;
	double e;
	int i,j;
	cin >> n >> e >> d;
	int may = 0, must = 0, sum =0;
	int day;
	double temp;
	for(i=0;i<n;i++){
		sum = 0;
		cin >> day;
		for(j=0;j<day;j++){
			cin >> temp;
			if(temp < e){
				sum ++;
			}
		}
		if(sum > day/2){
			if(day > d){
				must++;
			}else{
				may++;
			}
		}
	}
	
	double mrate = (may * 1.0) / (n * 1.0) * 100;
	double murate = (must * 1.0) / (n * 1.0) * 100;

	cout << fixed << setprecision(1) << mrate << "% " << fixed << setprecision(1) << murate << "%" << endl;
	return 0;
}
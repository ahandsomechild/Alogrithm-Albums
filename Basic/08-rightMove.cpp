/*
	1 2 3 4 5 6
	
	6 5 4 3 2 1
	
	5 6 1 2 3 4
  
*/

#include<iostream>

using namespace std;

void reverse(int a[],int i, int j){
	int temp;
	while(i<j){
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}

int main(){
	int n,a[100],i,j;
	int move;
	int temp;

	cin >> n >> move;

	move = move%n; //move有可能比n大

	for(i=0;i<n;i++){
		cin >> a[i];
	}

	i = 0;
	j = n - 1;
	reverse(a,i,j);
	i = 0;
	j = move - 1;
	reverse(a,i,j);
	i = move;
	j = n - 1;
	reverse(a,i,j);
	
	for(i=0;i<n;i++){
		cout << a[i];
		if(i != n-1){
			cout << " ";
		}
	}
	return 0;

}
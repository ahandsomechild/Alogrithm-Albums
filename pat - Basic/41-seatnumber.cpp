#include<iostream>
#include<string>

using namespace std;

struct student{
	string examid;
	int mid;
	int eid;
};

int main(){
	int n,m,i,j;
	struct student stu[1001];
	int exid;
	
	cin >> n;
	for(i = 0 ; i < n ; i++){
		cin >> stu[i].examid >> stu[i].mid >> stu[i].eid;
	}
	
	cin >> m;
	while(m--){
		cin >> exid;
		for(i = 0 ; i < n ; i++){
			if(stu[i].mid == exid){
				cout << stu[i].examid << " " << stu[i].eid << endl;
			}
		}
	}
	return 0;
}
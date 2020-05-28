#include<iostream>
#include<algorithm>

using namespace std;
struct student {
	int stuid;
	int yuwen;
	int math;
	int english;
	int total;
}stu[400];

bool cmp(student a,student b) {
	if (a.total != b.total) {
		return a.total > b.total;
	}
	else if (a.yuwen != b.yuwen) {
		return a.yuwen > b.yuwen;
	}
	else {
		return a.stuid < b.stuid;
	}
}

int main() {
	int n;
	int i, j;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> stu[i].yuwen >> stu[i].math >> stu[i].english;
		stu[i].stuid = i + 1;
		stu[i].total = stu[i].yuwen + stu[i].math + stu[i].english;
	}

	sort(stu, stu + n, cmp);
	for (i = 0; i < 5; i++) {
		cout << stu[i].stuid << " " << stu[i].total << endl;
		
	}
	return 0;
}
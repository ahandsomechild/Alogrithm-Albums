#include<iostream>
using namespace std;
int maxNum(double a[],int n) {
	int max = a[0];
	int f = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			f = i;
		}
	}
	return f;
}

void printfRes(int t) {
	switch (t)
	{
	case 0:
		cout << "W";
		break;
	case 1:
		cout << "T";
		break;
	case 2:
		cout << "L";
		break;
	default:
		break;
	}
}



int main() {
	int i, j, t;
	double bet[3][3];
	double max[3];
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cin >> bet[i][j];
		}
		t = maxNum(bet[i],3);
		printfRes(t);
		max[i] = bet[i][t];
		cout << " ";
	}
	double sum = (max[0] * max[1] * max[2] * 0.65 - 1) * 2;
	printf("%.2f", sum);

	return 0;
}
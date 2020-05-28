#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main() {
	double sum = 0;
	double x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	sum += sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	sum += sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	sum += sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));

	printf("%.02f\n", sum);
	return 0;
}
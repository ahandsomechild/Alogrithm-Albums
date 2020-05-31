#include<iostream>
#include<cmath>
using namespace std;

int isPrime(int num) {
	int flag = 1;
	if (num <= 1) {
		return 0;
	}
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			flag = 0;
			return 0;
		}
	}
	if (flag == 1) {
		return 1;
	}
}

int main() {
	int N, D;
	int temp;
	int flag = 1;
	while(flag) {
		cin >> N;

		if (N < 0) {
			flag = 0;
			return 0;
		}
		cin >> D;
		if (!isPrime(N)) {
			cout << "No" << endl;
		}
		else {
			//23 2
			// 1 1 1 0 1  （2--->10）正好是倒置的
			//29
			int sum = 0;
			while (N) {
				temp = N % D;
				sum = sum*D + temp;
				N /= D;
			}
			if (isPrime(sum)) {
				cout << "Yes" << endl;
			}
			else {
				cout << "No" << endl;
			}
		}
	}
	return 0;
}
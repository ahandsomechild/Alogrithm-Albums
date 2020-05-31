#include<iostream>
#include<string>
using namespace std;

void Week(char a) {
	switch (a) {
		case 'A':
			printf("MON");
			break;
		case 'B':
			printf("TUE");
			break;
		case 'C':
			printf("WED");
			break;
		case 'D':
			printf("THU");
			break;
		case 'E':
			printf("FRI");
			break;
		case 'F':
			printf("SAT");
			break;
		case 'g':
			printf("SUN");
			break;

	}
}

void hour(char a) {
	if (a == '0') {
		printf("00");
	}
	if (a > '0' && a <= '9') {
		printf("0%c",a);
	}
	else if (a >= 'A' && a <= 'N') {
		cout << a - 'A' + 10;
	}
}


int main() {

	string s1, s2, s3, s4;
	int i, j;
	cin >> s1 >> s2 >> s3 >> s4;
	i = 0; j = 0;
	int count = 0;
	while (i < s1.length() && j < s2.length()) {
		if (s1[i] == s2[j] && count == 1) {
			if((s1[i] >= 'A' && s1[i] <= 'N')||(s1[i] >= '0' && s1[i] <= '9'))
			hour(s1[i]);
			cout << ":";
			break;
		}
		if (s1[i] == s2[j] && s1[i] >= 'A' && s1[i] <= 'G'&&count == 0) {
			Week(s1[i]);
			cout << " ";
			count=1;
		}
		
		i++; j++;
	}
	i = 0; j = 0;
	while (i < s3.length() && j < s4.length()) {
		if (s3[i] == s4[j]) {
			if ((s3[i] >= 'A' && s3[i] <= 'Z') || (s3[i] >= 'a' && s3[i] <= 'z')) {
				printf("%02d", i);
			}
		}
		i++; j++;
	}
	return 0;
}
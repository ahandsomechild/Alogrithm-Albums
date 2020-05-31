#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	int n, i, j;
	string str, temp;
	int l1, l2,lmin;
	cin >> n;
	getchar();
	for (i = 0; i < n; i++) {
		getline(cin,str);
		reverse(str.begin(), str.end());
		if (i == 0) {
			temp = str;
			continue;
		}
		else {
			l1 = temp.length();
			l2 = str.length();
			lmin = l1 > l2 ? l2 : l1;
			for (j = 0; j < lmin; j++) {
				if (temp[j] != str[j]) {
					temp = temp.substr(0, j);
					break;
					
				}
			}
		}
	}

	if (temp.length() == 0) {
		cout << "nai" << endl;
	}
	else {
		reverse(temp.begin(), temp.end());
		for (i = 0; i < temp.length(); i++) {
			cout << temp[i];
		}
		cout << endl;
	}
	return 0;
}
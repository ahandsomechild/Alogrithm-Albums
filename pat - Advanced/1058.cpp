#include<iostream>

using namespace std;
int main() {
	char t = '.';
	long long int k1, s1, g1;
	long long int k2, s2, g2;
	long long int k = 0, s = 0, g = 0;

	cin >> g1 >> t >> s1 >> t >> k1;
	cin >> g2 >> t >> s2 >> t >> k2;
	k = (k1 + k2) % 29;
	if (k1 + k2 >= 29) {
		s = 1;
	}
	if (s+s1 + s2 >= 17) {
		g = 1;
	}
	s = (s + s1 + s2) % 17;
	g = g + g1 + g2;
	cout << g << "." << s << "." << k;
	return 0;
}
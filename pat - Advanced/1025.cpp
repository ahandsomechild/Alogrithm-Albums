#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
struct student {
	char id[13];
	int score;
	int placeid;
	int place_rank;
	int all_rank;
}s[30010];

bool cmp(student a,student b) {
	if (a.score != b.score) {
		return a.score > b.score;
	}
	else {
		return strcmp(a.id, b.id) < 0;
	}
}

int main() {
	int n, k, i, j;
	int num = 0;

	cin >> n; // 两个考场
	for (i = 1; i <= n; i++) {
		cin >> k;//考场多少人
		for (j = 0; j < k; j++) {
			cin >> s[num].id >> s[num].score;
			s[num].placeid = i;
			num++;
		}

		sort(s + num - k, s + num, cmp);
		s[num - k].place_rank = 1;
		for (j = num - k+1; j < num; j++) {
			if (s[j].score == s[j - 1].score) {
				s[j].place_rank = s[j - 1].place_rank;
			}
			else {
				s[j].place_rank = j + 1 - (num - k);
			}
		}
	}
	sort(s, s + num, cmp);
	s[0].all_rank = 1;
	for (i = 1; i < num; i++) {
		if (s[i].score == s[i - 1].score) {
			s[i].all_rank = s[i - 1].all_rank;
		}
		else {
			s[i].all_rank = i + 1;
		}
	}

	cout << num << endl;
	for (i = 0; i < num; i++) {
		cout << s[i].id << " ";
		cout << s[i].all_rank << " ";
		cout << s[i].placeid << " ";
		cout << s[i].place_rank << endl;
	}
	return 0;
}
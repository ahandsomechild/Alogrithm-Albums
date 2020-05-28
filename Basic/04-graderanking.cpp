#include<iostream>
#include<string>
using namespace std;

struct student
{
	string name, number;
	int score;
};

int main()
{
	student s[10000];
	int n,max=-1,min=101,max_position,min_position;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].name >> s[i].number >> s[i].score;
		if (s[i].score > max)
		{
			max = s[i].score;
			max_position = i;
		}
		if (s[i].score < min)
		{
			min = s[i].score;
			min_position = i;
		}
	}
	cout << s[max_position].name << " " << s[max_position].number<<endl;
	cout << s[min_position].name << " " << s[min_position].number << endl;
	return 0;

}

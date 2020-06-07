#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

struct stu
{
    int id;
    char name[9];
    int score;
};

bool cmp1(stu a, stu b)
{
    return a.id < b.id;
}
bool cmp2(stu a, stu b)
{
    if (strcmp(a.name, b.name) == 0)
    {
        return a.id < b.id;
    }
    else
    {
        return strcmp(a.name, b.name) <= 0;
    }
}
bool cmp3(stu a, stu b)
{
    if (a.score != b.score)
    {
        return a.score < b.score;
    }
    else
    {
        return a.id < b.id;
    }
}
int main()
{
    int n, c;
    scanf("%d %d", &n, &c);
    stu s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %d", &s[i].id, s[i].name, &s[i].score);
    }
    if (c == 1)
    {
        sort(s, s + n, cmp1);
    }
    else if (c == 2)
    {
        sort(s, s + n, cmp2);
    }
    else
    {
        sort(s, s + n, cmp3);
    }

    for (int j = 0; j < n; j++)
    {
        printf("%06d %s %d\n", s[j].id, s[j].name, s[j].score);
    }
    return 0;
}
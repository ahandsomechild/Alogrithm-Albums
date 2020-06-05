#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

struct stu
{
    string id;
    int ascore;
    int cscore;
    int mscore;
    int escore;
    int r1, r2, r3, r4, rank;
    char ans;
};

bool cmp1(stu a, stu b)
{
    return a.ascore > b.ascore;
}
bool cmp2(stu a, stu b)
{
    return a.cscore > b.cscore;
}
bool cmp3(stu a, stu b)
{
    return a.mscore > b.mscore;
}
bool cmp4(stu a, stu b)
{
    return a.escore > b.escore;
}

int main()
{
    int m, n;
    int i, j;
    cin >> m >> n;
    stu s[m];
    map<string, int> res;
    for (i = 0; i < m; i++)
    {
        cin >> s[i].id >> s[i].cscore >> s[i].mscore >> s[i].escore;
        s[i].ascore = s[i].mscore + s[i].escore + s[i].cscore;
    }
    sort(s, s + m, cmp1);
    s[0].r1 = 1;
    for (i = 1; i < m; i++)
    {
        if (s[i].ascore == s[i - 1].ascore)
        {
            s[i].r1 = s[i - 1].r1;
        }
        else
        {
            s[i].r1 = i + 1;
        }
    }
    sort(s, s + m, cmp2);
    s[0].r2 = 1;
    for (i = 1; i < m; i++)
    {
        if (s[i].cscore == s[i - 1].cscore)
        {
            s[i].r2 = s[i - 1].r2;
        }
        else
        {
            s[i].r2 = i + 1;
        }
    }
    sort(s, s + m, cmp3);
    s[0].r3 = 1;
    for (i = 1; i < m; i++)
    {
        if (s[i].mscore == s[i - 1].mscore)
        {
            s[i].r3 = s[i - 1].r3;
        }
        else
        {
            s[i].r3 = i + 1;
        }
    }
    sort(s, s + m, cmp4);
    s[0].r4 = 1;
    for (i = 1; i < m; i++)
    {
        if (s[i].escore == s[i - 1].escore)
        {
            s[i].r4 = s[i - 1].r4;
        }
        else
        {
            s[i].r4 = i + 1;
        }
    }
    for (i = 0; i < m; i++)
    {
        s[i].rank = s[i].r1;
        s[i].ans = 'A';
        if (s[i].r2 < s[i].rank)
        {
            s[i].rank = s[i].r2;
            s[i].ans = 'C';
        }
        if (s[i].r3 < s[i].rank)
        {
            s[i].rank = s[i].r3;
            s[i].ans = 'M';
        }
        if (s[i].r4 < s[i].rank)
        {
            s[i].rank = s[i].r4;
            s[i].ans = 'E';
        }
        res[s[i].id] = i;
    }
    string t;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        if (res.find(t) != res.end())
        {
            cout << s[res[t]].rank << " " << s[res[t]].ans << endl;
        }
        else
        {
            cout << "N/A" << endl;
        }
    }
    return 0;
}
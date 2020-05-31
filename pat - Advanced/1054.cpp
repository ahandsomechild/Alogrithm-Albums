#include<iostream>
#include<map>
using namespace std;
int main()
{
    int m, n;//m是列数，n是行数
    cin>>m>>n;
    int half = m * n / 2;
    map<int, int> color;
    for (int i = 0; i < m * n; i++)
    {
        int tmp;
        cin>>tmp;
        color[tmp]++;
        //cout << tmp << ": " << color[tmp] << endl;
        if (color[tmp] > half)
        {
            printf("%d\n", tmp);
            break;
        }
    }
    return 0;
}

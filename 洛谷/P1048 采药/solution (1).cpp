#include<iostream>
#include<algorithm>
using namespace std;
//01��������
/*
70 3
------------
71 100 
69 1
1 2
*/
int n, c, w[1001], v[1001];
int dp[1001][1001]; //�ö�ά����dp[i][j]����ʾ����Ե� i ����Ʒ���ұ�������Ϊ  j ʱ���ܻ�õ�����ֵ
int main() {    
    cin >> c >> n;
    for (int i = 1; i <= n; i++)
        cin >> w[i] >> v[i];
    for (int i = 1; i <= n; i++) //��Ʒ 
    {
        for (int j = 1; j <= c; j++)  //��һö�ٵ�C      
        {
            if (j >= w[i])
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);  //���ֵ            
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[n][c];
    return 0;
}



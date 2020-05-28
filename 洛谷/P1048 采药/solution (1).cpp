#include<iostream>
#include<algorithm>
using namespace std;
//01背包问题
/*
70 3
------------
71 100 
69 1
1 2
*/
int n, c, w[1001], v[1001];
int dp[1001][1001]; //用二维数组dp[i][j]，表示在面对第 i 件物品，且背包容量为  j 时所能获得的最大价值
int main() {    
    cin >> c >> n;
    for (int i = 1; i <= n; i++)
        cin >> w[i] >> v[i];
    for (int i = 1; i <= n; i++) //物品 
    {
        for (int j = 1; j <= c; j++)  //从一枚举到C      
        {
            if (j >= w[i])
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);  //最大值            
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[n][c];
    return 0;
}



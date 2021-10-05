/* Author : Swaraj Shelavale (errorless11) */
/* 0-1 Knapsack Problem - Top Down Approach*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fast                    \
    cin.sync_with_stdio(false); \
    cin.tie(NULL);              \
    cout.tie(NULL);

int dp[1001][10001];

signed main()
{
    fast;
    int n = 3;
    int wt[3] = {10, 20, 30};
    int val[3] = {60, 100, 120};
    int W = 50;
    //memonization
    memset(dp, -1, sizeof(dp));

    //Top down approch
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;
    for (int i = 0; i <= W; i++)
        dp[0][i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (wt[i - 1] <= j)
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][W];
    return 0;
}

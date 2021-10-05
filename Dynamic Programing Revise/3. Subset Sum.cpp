/* Author : Swaraj Shelavale (errorless11) */
/* Subset Sum - Top Down Approach*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fast                    \
    cin.sync_with_stdio(false); \
    cin.tie(NULL);              \
    cout.tie(NULL);

int dp[1001][10001];
int subsetSum(int n, int arr[], int sum)
{
    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;
    for (int i = 1; i <= sum; i++)
        dp[0][i] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][sum];
}
signed main()
{
    fast;
    int n = 6;
    int arr[6] = {3, 34, 4, 12, 5, 2};
    int sum = 9;
    //memonization
    memset(dp, -1, sizeof(dp));

    cout << subsetSum(n, arr, sum);

    return 0;
}

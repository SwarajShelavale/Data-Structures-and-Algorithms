#include <bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[],int n,int sum)
{
	bool dp[n+1][sum+1];
	//Base Conditions 
	for(int i=0;i<=n;i++) //sum=0
	{
		dp[i][0]=true;
	}
	for(int j=1;j<=sum;j++) //array size in zero
	{
		dp[0][j]=false;
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(arr[i-1]<=j)
			{
				dp[i][j]= dp[i-1][j-arr[i-1]] || dp[i-1][j];
			}
			else
			{
				dp[i][j]= dp[i-1][j];
			}
		}
	}
	return dp[n][sum];
}

int main()
{

    int arr[] = { 10, 20, 30 };
    int sum=50;
    int n = sizeof(arr) / sizeof(arr[0]);
	bool ans=subsetSum(arr,n,sum);
	cout<<ans<<"\n";
}

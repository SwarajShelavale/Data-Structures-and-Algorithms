#include <bits/stdc++.h>
using namespace std;

int subsetSum(int arr[],int n,int sum)
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
	
	//DIFF
	int diff=INT_MAX;
	for(int j=0;j<=sum/2;j++)
	{
		int s1=j;
		int s2=sum-j;
		if(dp[n][j]==true && diff>abs(s1-s2))
			diff=abs(s1-s2);
	}
	return diff;
}

int main()
{

    int arr[] = {1, 6, 14, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum=0;
	sum=accumulate(arr,arr+n,sum);
	int ans=subsetSum(arr,n,sum);
	cout<<ans<<"\n";
}

#include <bits/stdc++.h>
using namespace std;

string PrintShortestCommonSupersequence(int n,int m,string a,string b)
{
	int dp[n+1][m+1];
	//Base Conditions 
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=0;
	}
	for(int j=0;j<=m;j++)
	{
		dp[0][j]=0;
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i-1]==b[j-1])
			{
				dp[i][j]= 1+dp[i-1][j-1];
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	
	int i=n,j=m;
	string res="";
	while(i>0 && j>0)
	{
		if(a[i-1]==b[j-1])
		{
			res+=a[i-1];
			i--;
			j--;
		}
		else
		{
			if(dp[i-1][j]>dp[i][j-1])
			{
				res+=a[i-1];
				i--;
			}
			else
			{
				res+=b[j-1];
				j--;
			}
				
		}
			
	}
	reverse(res.begin(),res.end());
	return res;
}

int main()
{
	string a = "abbca";
    string b = "adbca";
	string ans=PrintShortestCommonSupersequence(a.size(),b.size(),a,b);
	cout<<ans<<"\n";
	return 0;
}

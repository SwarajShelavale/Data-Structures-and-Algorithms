//Program by Swaraj Shelavale @errorless111
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        cout<<ch;
        cout<<endl;
    }
        return 0;
}

// } Driver Code Ends



//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    stack<char> s;
    int i=0;
    while(S[i])
        s.push(S[i++]);
    for(i=0;i<len;i++)
    {
        S[i]=s.top();
        s.pop();
    }
    return S;
}

//Program by Swaraj Shelavale @errorless111

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        int i=0;
        stack<char> st;
        string a="";
        for(i=0;i<s.length();i++)
        {
            if(s[i]!='.')
            {
                st.push(s[i]);
            }
            else
            {
                while(!st.empty())
                {
                    a=a+st.top();
                    st.pop();
                }
                a=a+".";
            }
        }
        while(!st.empty())
        {
            a=a+st.top();
            st.pop();
        }
        return a;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends

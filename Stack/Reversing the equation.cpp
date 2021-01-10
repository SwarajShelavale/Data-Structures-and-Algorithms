//Program by Swaraj Shelavale @erroless111

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            stack<string> st;
            for(int i=0;i<s.length();i++)
            {
                if(isdigit(s[i]))
                {
                    string S="";
                    S+=s[i];
                    while(i+1<s.size() && isdigit(s[i+1]))
                    {
                        S+=s[i+1];
                        i++;
                    }
                    st.push(S);
                }
               else
               {
                   string S="";
                   S+=s[i];
                   st.push(S);
               }
            }
            string rev="";
            while(!st.empty())
            {
                rev+=st.top();
                st.pop();
            }
            return rev;
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends

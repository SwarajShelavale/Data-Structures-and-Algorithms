//Program by Swaraj Shelavale @errorless111

#include<bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        queue<int> q;
        while(n-->0){
            int a;
            cin>>a;
            q.push(a);
        }
        queue<int> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}// } Driver Code Ends


//User function Template for C++

queue<int> modifyQueue(queue<int> q, int k)
{
    //add code here.
    stack<int>s;
    queue<int> Q;
    while(!q.empty() && k--)
    {
        s.push(q.front());
        q.pop();
    }
    int temp=s.top();
    while(!s.empty())
    {
        Q.push(s.top());
        s.pop();
    }
    while(!q.empty())
    {
        int val=q.front();
        q.pop();
        Q.push(val);
    }
    return Q;
    
}

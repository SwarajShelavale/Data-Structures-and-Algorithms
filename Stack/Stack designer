//Program by Swaraj Shelavale @errorless111

#include <bits/stdc++.h>
using namespace std;

stack<int>_push(int arr[],int n);


void _pop(stack<int>s);


 // } Driver Code Ends


//User function Template for C++

/* _push function to insert elements of array to
   stack
*/
stack<int>_push(int arr[],int n)
{
   //return a stack with all elements of arr inserted in it
   stack <int> s;
   int i=0;
   while(i<n)
   {
       s.push(arr[i]);
       i++;
   }
   return s;
}

/* _pop function to print elements of the stack
   remove as well
*/
void _pop(stack<int> s)
{
    //print top and pop for each element until it becomes empty
    while(!s.empty())
    {
        int data=s.top();
        cout<<data<<" ";
        s.pop();
    }
    
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _pop(mys);
	    cout<<endl;
	    
	    
	    
	}
	return 0;
}

  // } Driver Code Ends

//Program by Swaraj Shelavale @errorless111

#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void inorder(Node *root)
{
    if (root == NULL)return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);    
}

void printOddNodes(Node *root);

/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     // inorder(root);
     // cout<<endl;
     printOddNodes(root);
  }
  return 0;
}// } Driver Code Ends


/*Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// your task is to complete the function
void printOddNodes(Node *root)
{
    if(root==NULL)
    {
        cout<<"\n";
        return;
    }
        
   queue <Node *> q;
   q.push(root);
   int level=0;
   while(!q.empty())
   {
       level++;
       int size=q.size();
       for(int i=0;i<size;i++)
       {
            Node *cur=q.front();
            q.pop();
            if(level%2)
                cout<<cur->data<<" ";
            if(cur->left)
                q.push(cur->left);
            if(cur->right)
                q.push(cur->right);
       }
   }
   cout<<"\n";
}

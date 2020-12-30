//Program by Swaraj Shelavale @errorless111
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
  }  
  cout<<"\n";
} 

Node *insertAtBegining(Node *head, int newData);
Node *insertAtEnd(Node *head, int newData);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin>>data;
            cin>>indicator;
            if(indicator)
                head = insertAtEnd(head, data); 
            else
                head = insertAtBegining(head, data);
        }
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends


/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

// function inserts the data in front of the list
Node *insertAtBegining(Node *head, int newData) {
   // Your code here
    if(head==NULL)
        return new Node(newData);
    Node *cur=new Node(newData);
    cur->next=head;
    return cur;
}


// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  {
   // Your code here
   if(head==NULL)
        return new Node(newData);
    Node *cur=head;
    while(cur->next!=NULL)
        cur=cur->next;
    cur->next=new Node(newData);
    return head;
}

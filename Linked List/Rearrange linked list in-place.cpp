//Program by Swaraj Shelavale @errorless111

#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node *inPlace(Node *root);
 
void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main() {
	// your code goes here
	int T;
	cin>>T;
 
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		Node *res = inPlace(head);
		print(res);
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
#include <bits/stdc++.h>

Node *inPlace(Node *root)
{
 // your code goes here
     Node *tmp=root;
    int a[100],b[100];
    int i=0,cnt=0,n=0;
    while(tmp!=NULL)
    {
        a[i++]=tmp->data;
        tmp=tmp->next;
        n++;
    }
    n=n-1;
    for(i=0; i<(n+2)/2; i++)
    {
        b[cnt++]=a[i];
        b[cnt++]=a[n-i];
    }
    tmp=root;
    i=0;
    while(tmp!=NULL)
    {
        tmp->data=b[i++];
        tmp=tmp->next;
    }
    return root;
}

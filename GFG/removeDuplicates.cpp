// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}


 // } Driver Code Ends
/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//in this problem we have to use set data structure by using it we have to traverse 
//  linked list and while traversing there is conditions if ptr-> data is in set then 
// change ptr to next to next element else insert that ptr->data in set
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
    Node *ptr = head, *prev = NULL;
    unordered_set <int> s;
    while(ptr){
        
        if(s.find(ptr->data)!= s.end())
        {
            Node *tmp = ptr;
            prev->next = tmp->next;
            ptr = prev;
            delete tmp;
            tmp = NULL;
        }
        else
        {
            
              s.insert(ptr->data);
        }
        prev = ptr;
        ptr =ptr->next;
    }
    return head;
    }
    
};


// { Driver Code Starts.

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
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}  // } Driver Code Ends

// itn  this problem we have to traverse the tree in bfs manner so that if we got leaf while traversing in bfs then another all leafs should also in same level which is proved by creating variable l this l is initially -1 but when we start traversing and find leaf node then it becomes h , "h is a level of tree it increases by one as for loop ends "  so if another leaf node is found then l should equal to h as for loop should not ended before covering all leaf nodes
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    /*You are required to complete this method*/
  bool isLeaf(Node* root){
        if(root->left||root->right) return false;
        return true;
    }
    bool check(Node *root)
    {
        //Your code here
        queue<Node*> q;
        q.push(root);
        int level=-1;
        int hl=0;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                
                Node* node=q.front();
                q.pop();
                if(isLeaf(node)){
                    if(level==-1)
                        level=hl;
                    else if(level!=hl)
                        return false;
                }
            
                if(node->left)  q.push(node->left);
                if(node->right) q.push(node->right);
      
            }
            hl++;
        }
        return true;
    }
};

//{ Driver Code Starts.
// Driver program to test size function
int main()
{
    int t;
    cin>> t;
    getchar();
    while (t--)
    {
        string s;
        getline( cin, s );
        Node* head = buildTree( s );
        Solution obj;
        cout << obj.check(head) << endl;
    }
    return 0;
}

// } Driver Code Ends
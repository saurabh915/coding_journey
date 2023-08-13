//{ Driver Code Starts

// in this program we have to find the nodes which can be seen from  bottom they may be leaf or non-leaf node also
//for this we divide binary tree in columns like -2, -1,0 ,1 ,2 ,3 etc for that we create queue of pair which
//includes node and its repective line line (line is column) then we first insert root and line 0 as first pair in queue then we use while loop which iterate till q is not empty inside this loop we pop front of queue and store it in auto it variable here it.first is node in queue and it.second is line or column 
//then we use map and store mp[line] = it.first->data and use if (node ->left )then  q.push({top->left , line-1});
//and again if (node ->right )then  q.push({top->right , line+1});




#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

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


vector <int> bottomView(Node *root);

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
//Function to return a list containing the bottom view of the given tree.

class Solution {
  public:
  
 

    vector <int> bottomView(Node *root) {
      vector<int>ans;
     queue <pair< Node* , int>> q;
     q.push({root,0});
     map<int , int>mp;
     while(!q.empty()){
         auto it = q.front();
         q.pop();
         struct  Node*  top = it.first;
         int line = it.second;
     
       
             mp[line] =top->data;//here we are upgrating our mp[line] data continuously
        cout<<top->data<<endl;
         
         if(top->left != NULL){
             q.push({top->left , line-1});
             
         }
         if(top->right != NULL){
             q.push({top->right,line+1});
         }
     }
     
     for(auto it : mp){
         ans.push_back(it.second);//
     }
     return ans;
    }
};





//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        vector <int> res = ob.bottomView(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}



// } Driver Code Ends
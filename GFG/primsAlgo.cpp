//in prims algorithm we first choose oth node and store its key as 0 then we store all the adjcent nodes to zeroth node in key then we try to find out min_index from key array whose weight means key[key_index] is minimum and take that index and again try to find all adjcent nodes to that index
#include<bits/stdc++.h>
using namespace std;
#define V 9



int minKey(int key[], bool mstSet[]){
    int min = INT_MAX, min_index;
     for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;
 
    return min_index;
}





int printMST(int parent[], int graph[V][V],int cost){
cout<<"Edge \tWeight\n";
for (int i = 0; i < V; i++)
{
       cout << parent[i] << " - " << i << " \t"
             << graph[i][parent[i]] << " \n";
             cost = cost+graph[i][parent[i]];
}
return cost;
}
int primMST(int graph[V][V])
{

int parent[V];
int key[V];

bool mstSet[V];

   for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;

key[0] =0;  //key of 0 means weight of zeroth node
parent[0] = -1;
int cost =0;
for(int count =0; count <V-1;count++)
{
    int u = minKey(key, mstSet);  //first it will return 0 as minimum key in all key array is key[0] =0 

      mstSet[u] = true;

       for (int v = 0; v < V; v++)//as we have find the min key all adjucent nodes weights are stored  in key array
     {
            // graph[u][v] is non zero only for adjacent
            // vertices of m mstSet[v] is false for vertices
            // not yet included in MST Update the key only
            // if graph[u][v] is smaller than key[v]
            if (graph[u][v] && mstSet[v] == false
                && graph[u][v] < key[v])
                {
                 parent[v] = u, key[v] = graph[u][v];

                }
        }        
    }
   
    return  printMST(parent, graph,cost);
}

int main(){

int graph[V][V] = { 			 { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
						{ 4, 0, 8, 0, 0, 0, 0, 11, 0 },
						{ 0, 8, 0, 7, 0, 4, 0, 0, 2 },
						{ 0, 0, 7, 0, 9, 14, 0, 0, 0 },
						{ 0, 0, 0, 9, 0, 10, 0, 0, 0 },
						{ 0, 0, 4, 14, 10, 0, 2, 0, 0 },
						{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
						{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
						{ 0, 0, 2, 0, 0, 0, 6, 7, 0 }
};
 
    // Print the solution
  int ans =   primMST(graph);
 
    return 0;
}
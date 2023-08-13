// C++ program for the above approach



// in krushkalsAlgo we have to first crete a class called DSU which will store the disjoint set information
//like parent of each node , rank of each node etc.and functions like findparent and unite etc.

//then there is  class called DSU in which we first create constructor in which we initialize array parent and rank parent is initally initialized to parent[i] =i; and rank[i] =0;
//then we create find and union

//there is another class called Graph in which we declare a constructor which will set no. of vertext to variable V;
// then there are two methods addEdge and krushkalMst lets see how these methods work

//addEdge works like edgelist.push_back({ w, x, y }); whatecer param. you will give in addedge function it will push that parameters in edgelist vector

//And in case of krushkalMst it will first sort all edges according to their weights then we itterate through all the edges one by one and destructure it as w ,x,y and use function find to find parent of x and parent of y if they are same means they belong to same component if they not then unite them and increase ans by s.unite(x, y);
				// ans += w;





#include <bits/stdc++.h>
using namespace std;

// DSU data structure
// path compression + rank by union

class DSU {
	int* parent;
	int* rank;

public:
	DSU(int n)
	{
		parent = new int[n];
		rank = new int[n];

		for (int i = 0; i < n; i++) {
			parent[i] = -1;
			rank[i] = 1;
		}
	}




void printp(int n){
 for(int i =0; i<n;i++)
 {
 cout<<" "<<parent[i];
 }

}



	// Find function
	int find(int i)
	{
		if (parent[i] == -1)
			return i;

		return parent[i] = find(parent[i]);
	}

	// Union function
	void unite(int x, int y)
	{
		int s1 = find(x);
		int s2 = find(y);

		if (s1 != s2) {
			if (rank[s1] < rank[s2]) {
				parent[s1] = s2;
			}
			else if (rank[s1] > rank[s2]) {
				parent[s2] = s1;
			}
			else {
				parent[s2] = s1;
				rank[s1] += 1;
			}
		}
	}
};

class Graph {
	vector<vector<int> > edgelist;
	int V;

public:
	Graph(int V) { this->V = V; }

	void addEdge(int x, int y, int w)
	{
		edgelist.push_back({ w, x, y });
	}

	void kruskals_mst()
	{
		// 1. Sort all edges
		sort(edgelist.begin(), edgelist.end());

		// Initialize the DSU
		DSU s(V);
		int ans = 0;
		cout << "Following are the edges in the "
				"constructed MST"
			<< endl;
		for (auto edge : edgelist) {
			int w = edge[0];
			int x = edge[1];
			int y = edge[2];

			// Take this edge in MST if it does
			// not forms a cycle
			if (s.find(x) != s.find(y)) {
				s.unite(x, y);
				ans += w;
				cout << x << " -- " << y << " == " << w
					<< endl;
			}
		}

		cout << "Minimum Cost Spanning Tree: " << ans;
	}
};

// Driver's code
int main()
{
	/* Let us create following weighted graph
				10
			0--------1
			| \	 |
			6| 5\ |15
			|	 \ |
			2--------3
				4	 */
	Graph g(4);
	g.addEdge(0, 1, 10);
	g.addEdge(1, 3, 15);
	g.addEdge(2, 3, 4);
	g.addEdge(2, 0, 6);
	g.addEdge(0, 3, 5);

	// Function call
	g.kruskals_mst();
	return 0;
}

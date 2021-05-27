#include<bits/stdc++.h>
using namespace std;

struct nodes{
	int id;
	int values = 0;
};

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V){
	for (int v = 0; v < V; ++v)
	{
		cout << "\n Adjacency list of vertex "
			<< v << "\n head ";
      	int no_of_nodes = 0;
		for (auto x : adj[v]){
        	cout << "-> " << x;
          	no_of_nodes++;
        }
		cout << "\n Number of Children: " << no_of_nodes << endl;
		printf("\n");
	}
}

int main(){
	int V = 20;
	vector<int> adj[V];

	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 2, 4);
	addEdge(adj, 2, 5);
	addEdge(adj, 5, 6);
	addEdge(adj, 5, 7);
	addEdge(adj, 7, 8);
	addEdge(adj, 7, 9);
	addEdge(adj, 9, 10);
	addEdge(adj, 9, 11);
	addEdge(adj, 9, 12);
	addEdge(adj, 9, 13);
	addEdge(adj, 11, 14);
	addEdge(adj, 11, 15);
	addEdge(adj, 12, 16);
	addEdge(adj, 12, 17);
	addEdge(adj, 13, 18);
	addEdge(adj, 13, 19);
	printGraph(adj, V);

	return 0;
}
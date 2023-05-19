#include <bits/stdc++.h>
using namespace std;
class Graph
{
public:
	int V; // No. of vertices

	list<int> *adj;

	Graph(int ); // Constructor

	void addEdge(int, int);

	vector<int> BFS(int, int, int []);
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V+1];
}

void Graph::addEdge(int u, int v)
{
	adj[u].push_back(v); // Add w to v’s list.
	adj[v].push_back(u); // Add v to w’s list.
}

vector<int> Graph::BFS(int componentNum, int src,
									int visited[])
{
	queue<int> queue;

	queue.push(src);

	visited[src] = componentNum;

	vector<int> reachableNodes;

	while(!queue.empty())
	{
		int u = queue.front();
		queue.pop();

		reachableNodes.push_back(u);

		for (auto itr = adj[u].begin();
				itr != adj[u].end(); itr++)
		{
			if (!visited[*itr])
			{
				visited[*itr] = componentNum;
				queue.push(*itr);
			}
		}
	}
	return reachableNodes;
}

void displayReachableNodes(int n,
			unordered_map <int, vector<int> > m)
{
	vector<int> temp = m[n];
	for (int i=0; i<temp.size(); i++)
		cout << temp[i] << " ";

	cout << endl;
}

void findReachableNodes(Graph g, int arr[], int n)
{
	int V = g.V;
	int visited[V+1];
	memset(visited, 0, sizeof(visited));
	unordered_map <int, vector<int> > m;
	int componentNum = 0;

	for (int i = 0 ; i < n ; i++)
	{
		int u = arr[i];

		if (!visited[u])
		{
			componentNum++;

			m[visited[u]] = g.BFS(componentNum, u, visited);
		}

		cout << "Reachable Nodes from " << u <<" are\n";
		displayReachableNodes(visited[u], m);
	}
}

int main()
{
	int V = 7;
	Graph g(V);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 4);
	g.addEdge(3, 1);
	g.addEdge(5, 6);
	g.addEdge(5, 7);

	int arr[] = {2, 4, 5};
	int n = sizeof(arr)/sizeof(int);

	findReachableNodes(g, arr, n);

	return 0;
}

/*
	Referenced user kinopro's solution.
	It is very clear
*/
#include <iostream>
#include <vector>

using namespace std;

vector<int> graphs[100];
long long danger;
int visited_nodes[100];

void depth_first_search(int starting_node)
{
	/*
		If node is visited, dont do anything.
	*/
	if(visited_nodes[starting_node])
		return;

	/*
		If node is not visited visit the node,
		and check its immediate neighbours.
	*/
	visited_nodes[starting_node] = 1;

	for(int i=0;i<graphs[starting_node].size();i++)
	{
		if(!visited_nodes[graphs[starting_node][i]])
		{
			danger *= 2;
			depth_first_search(graphs[starting_node][i]);
		}
	}
	
}

int main()
{
	cin.sync_with_stdio(false);

	int N,M;

	cin >> N >> M;

	for(int i=0;i<M;i++)
	{
		int x,y;

		cin >> x >> y;

		/*
			Here We generate graphs starting from each node
			recieved in the form of a pair of reacting chemecals.
		*/
		graphs[x].push_back(y);
		graphs[y].push_back(x);

	}

	danger = 1;

	/*
		We now perform depth first search on the graphs 
		we created previously.
	*/
	for(int i=1;i<=N;i++)
	{
		if(!visited_nodes[i])
			depth_first_search(i);
	}

	cout << danger << endl;

	return 0;
}
/*	RECURSIVE DEPTH FIRST SEARCH*/

/*
	VARIABLE DESCRIPTION :

	1 : Array visited[k]
			-> 0 if node k is not visited
			-> 1 if visited

	2 :	Array graph[N][N]
			-> Describes graph of N nodes
			-> graph[x][] holds all the componenets 
			   connected to node x.
		
	3 :	Stack dfs_path
			-> Stores the nodes visited in order 
			   of visiting them. 
*/

int visited[100];
vector<int> graph[100];
stack<int> dfs_path;

/*
	Performs the depth first search algorithm
	taking @param node as the starting node.

	The output of the algorithm, the path is
	stored in the dfs_path stack.
*/
void depth_first_search(int node)
{
	if(visited[node])
		return;

	visited[node] = 1;
	dfs_path.push(node);

	for(int i-0;i<graph[node].size();i++)
	{
		if(!visited[graph[node][i]])
		{
			depth_first_search(graph[node][i]);
		}
	}
}
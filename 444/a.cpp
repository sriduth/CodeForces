#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	/*
		Notes :
			1- Set precision.
			2- Vector is slow for such problems.
	*/

	cout.precision(15);
	int nodes,edges,a,b;
	double val,density;

	cin >> nodes >> edges;

	/*
		Array wins over vector : not handling large inputs
		well
	*/
	double node_values[nodes];

	for(int i=0;i<nodes;i++)
	{
		cin >> node_values[i];
	}

	/*
		Hmm I wonder how.
	*/
	for(int i=0;i<edges;i++)
	{
		cin >> a >> b >> val;
		density = max(density,((node_values[a-1]+node_values[b-1])/val));
	}

	cout << density << endl;

	return 0;
}
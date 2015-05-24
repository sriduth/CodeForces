#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	int dimensions;

	cin >> dimensions;

	int tree[dimensions][dimensions];
	unordered_map<int,int> weights;

	for(int i=0;i<dimensions;i++)
		cin >> tree[0][i];

	if(tree[0][0] != 0)
	{
		cout << "NO" << endl;
		return 0;
	}

	for(int i=1;i<dimensions;i++)
	{
		for(int j=0;j<dimensions;j++)
		{
			cin >> tree[i][j];
			if(i == j && (tree[i][j] != 0))
			{
				cout << "NO" << endl;
				return 0;
			}
			if(i != j && (tree[i][j] == 0))
			{
				cout << "NO" << endl;
				return 0;
			}
		}

		for(int k=0;k<i;k++)
		{
			if(tree[i][k] != tree[k][i] || weights[tree[i][k]] >= 2)
			{
				cout << "NO" << endl;
				return 0;
			}
			else
				weights[tree[i][k]]++;
		}
	}
	cout << "YES" << endl;
}
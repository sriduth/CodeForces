#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
	int k,l;
	int min_index = INT_MAX,max_index= -1;
	int top=INT_MAX,bottom=-1;

	cin >> k >> l;

	char letter[k][l];

	for(int i=0;i<k;i++)
	{
		for(int j=0;j<l;j++)
		{
			cin >> letter[i][j];
			if(letter[i][j] == '*')
			{
				top = min(top,i);
				bottom = max(bottom,i);
				min_index = min(min_index,j);
				max_index = max(max_index,j);
			}
		}
	}

	for(int i=top;i<=bottom;i++)
	{
		for(int j=min_index;j<=max_index;j++)
			cout << letter[i][j];
		cout << endl;
	}

	return 0;
}
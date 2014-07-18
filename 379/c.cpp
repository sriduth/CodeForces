#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> index,values;

bool compare(int a,int b)
{
	if(values[a] < values[b])
		return true;
	else
		return false;
}

int main()
{
	int T;
	
	cin >> T;

	index.resize(T,0);
	values.resize(T,0);

	for(int i=0;i<T;i++)
	{
		cin >> values[i];
		index[i] = i;	
	}

	sort(index.begin(),index.end(),compare);

	int why = values[index[0]];
	for(int i=1;i<values.size();i++)
	{
		if(why >= values[index[i]])
			values[index[i]] = ++why;
		else
			why = values[index[i]];
	}

	for(int i=0;i<T;i++)
		cout << values[i] << " ";

	return 0;
}
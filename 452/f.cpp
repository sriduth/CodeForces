#include <cstdio>
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	int T;
	unordered_map<int,int> pos;
	scanf("%d",&T);

	if(T <= 2)
	{
		cout << "NO" << endl;
		return 0;
	}
	int data[T];

	// get the data
	for(int i=0;i<T;i++)
	{
		scanf("%d",&data[i]);
		pos[ data[i] ] = i;

	}
	sort(data,data+T);

	for(int i=0;i<T;i++)
	{
		for(int j=i;j<T;j++)
		{
			int k = (data[i] + data[j])/2;
			if(pos[k] < pos[max(data[i],data[j])] && pos[k] > pos[min(data[i],data[j])]
				|| pos[k] > pos[max(data[i],data[j])] && pos[k] < pos[min(data[i],data[j])])
			{
				cout << "YES" << endl;
				return 0;
			}
		}
	}

	cout << "NO" << endl;	
	return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int T,temp,count=0;
	vector<int> L;

	cin >> T;

	for(int i=0;i<T;i++)
	{
		cin >> temp;
		L.push_back(temp);
		if(temp%2==0)
			count++;
	}

	if(count > 1)
	{
		for(int i=0;i<T;i++)
		{
			if(L[i]%2 != 0)
			{
				cout << i+1 << endl;
				break;
			}
		}
	}

	else
	{
		for(int i=0;i<T;i++)
		{
			if(L[i]%2 == 0)
			{
				cout << i+1 << endl;
				break;
			}
		}
	}


	L.clear();
	
	return 0;
}
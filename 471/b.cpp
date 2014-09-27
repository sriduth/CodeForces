#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	map<int,vector<int> > data;
	int T;
	cin >> T;

	bool has_three = false;
	int three = 0;

	int two_count = 0;
	int two[2];

	for(int i=0;i<T;i++)
	{
		int temp;
		cin >> temp;
		data[temp].push_back(i+1);

		if(data[temp].size() > 2 && !has_three)
		{
			has_three = true;
			three = temp;
		}
		else if(data[temp].size() == 2 && two_count != 2)
			two[two_count++] = temp;
	}

	if(has_three)
	{
		vector<int> Z = data[three];

		cout << "YES" << endl;
		for(int j=0;j<3;j++)
		{
			vector<int> v = data[three];
			v[0] = Z[j%3];
			v[1] = Z[(j+1)%3];
			v[2] = Z[(j+2)%3];
			data[three] = v;

			for(int i=1;i<=2000;i++)
			{			
				for(int X : data[i])
				{
					cout << X << " ";
				}
			}
			cout << endl;
		}
	}

	else if(two_count == 2)
	{
		cout << "YES" << endl;
		for(int j=0;j<3;j++)
		{
			for(int i=1;i<=2000;i++)
			{			
				for(int X : data[i])
				{
					cout << X << " ";
				}
			}
			cout << endl;

			if(j == 0)
			{
				vector<int> v = data[two[0]];
				int temp = v[0];
				v[0] = v[1];
				v[1] = temp;

				data[two[0]] = v;
			}
			if(j == 1)
			{
				vector<int> v = data[two[1]];
				int temp = v[0];
				v[0] = v[1];
				v[1] = temp;

				data[two[1]] = v;				
			}
		}
	}

	else
		cout << "NO" << endl;
	return 0;
}
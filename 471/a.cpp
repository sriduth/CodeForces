#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	unordered_map<int,int> data;
	unordered_map<int,int>:: iterator it;
	for(int i=0;i<6;i++)
	{
		int k;
		cin >> k;
		data[k]++;
	}

	bool legs = false;

	for(it = data.begin();it!=data.end();it++)
	{
		if(it->second >= 4)
		{
			data.erase(it);
			legs = true;
			break;
		}
	}

	if(!legs)
	{
		cout << "Alien" << endl;
		return 0;

	}
	
	it = data.begin();
	if(data.size() == 1 && it->second == 1)
		cout << "Bear" << endl;
	else if(data.size() > 1)
		cout << "Bear" << endl;
	else
		cout << "Elephant" << endl;

	return 0;
}
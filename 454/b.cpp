#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	list<int> data;
	int T,temp;

	cin >> T;

	for(int i=0;i<T;i++){
		cin >> temp;
		data.push_back(temp);
	}

	
	for(int i=0;i<T;i++)
	{
		if(is_sorted(data.begin(),data.end()))
		{
			cout << i << endl;
			return 0;
		}

		else{
			data.push_front(data.back());
			data.pop_back();
		}
	}

	cout << "-1" << endl;
	return 0;
}
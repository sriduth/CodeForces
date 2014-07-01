#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> V;
	V.push_back(1);


	vector<int>:: iterator it;

	it = V.begin();
	V.erase(it);


	for(it=V.begin();it!=V.end();it++)
	{
		cout << *it;
	}
	return 0;
}
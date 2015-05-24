#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	int T,temp,zero=0;

	vector<int> pos,neg,zer;
	
	cin >> T;

	for(int i=0;i<T;i++)
	{
		cin >> temp;
		if(temp > 0)
			pos.push_back(temp);
		else if(temp < 0)
			neg.push_back(temp);
		else
			zero++;
	}

	if(pos.size() == 0 && neg.size() > 1)
	{
		if(neg.size()%2 == 0 && neg.size() > 3)
		{
			pos.push_back(neg[neg.size()-1]);
			pos.push_back(neg[neg.size()-2]);
			zer.push_back(neg[neg.size()-3]);
			neg.pop_back();
			neg.pop_back();
			neg.pop_back();
		}
		else if(neg.size()%2 != 0 && neg.size() >= 3 )
		{
			pos.push_back(neg[neg.size()-1]);
			pos.push_back(neg[neg.size()-2]);
			neg.pop_back();
			neg.pop_back();
		}
	}

	if(neg.size()%2 == 0 && neg.size() > 0)
	{
		zer.push_back(neg[neg.size()-1]);
		neg.pop_back();
	}
	while(zero--)
		zer.push_back(0);


	cout << neg.size();

	for(auto ng : neg)
		cout << " " << ng ;

	cout << endl << pos.size();

	for(auto po : pos)
		cout << " " << po;

	cout << endl << zer.size();

	for(auto ze : zer)
		cout  << " " << ze;


	return 0;
}
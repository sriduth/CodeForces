#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int T,temp;
	vector<int> seq;

	cin >> T;

	while(T--)
	{
		cin >> temp;
		seq.push_back(temp);
	}
	sort(seq.begin(),seq.end());

	for(int i=0;i<seq.size();i++)
		cout << seq[i] << " ";
	
	cout << endl;	

	bool flag = true;

	for(int i=0;i<seq.size()-1;i++)
	{
		while(seq[i] <= seq[i+1] && seq[i] != 0)
			seq[i+1] %= seq[i];
	}

	for(int i=0;i<seq.size();i++)
		cout << seq[i] << " ";
}
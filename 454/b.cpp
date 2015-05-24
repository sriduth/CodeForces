#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int seq[n];

	for(int i=0;i<n;i++)
		cin >> seq[i];

	int sort_break = 0;
	for(int i=0;i<n-1;i++)
	{
		if(seq[i] > seq[i+1])
		{
			sort_break = i+1;
			break;
		}
	}

	vector<int> new_seq;
	for(int i=sort_break;i<n+sort_break;i++)
		new_seq.push_back(seq[i%n]);
	
	if(is_sorted(new_seq.begin(),new_seq.end()))
	{
		cerr << "Sorted" << endl;
		if(sort_break == 0)
			cout << '0' << endl;
		else
			cout << n - sort_break << endl;

	}
	else
	{
		cerr << "Not Sorted" << endl;
		cout << "-1" << endl;
	}
}
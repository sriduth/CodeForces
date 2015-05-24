#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main()
{
	int n;
	vector< pair<int,int> > schedule;

	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		int first,second;
		scanf("%d %d",&first,&second);
		schedule.push_back(make_pair(first,second));
	}

	sort(schedule.begin(),schedule.end());

	int best = -1;
	// Take the exam on the scheduled day if earlier,
	// else take on advanced day.
	for(int i=0;i<n;i++)
	{
		if(best <= schedule[i].second)
			best = schedule[i].second;
		else
			best = schedule[i].first;
	}

	printf("%d",best);
	
	return 0;
}
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
	int stud,sub;
	unordered_set<int> sol;
	vector<int> sub_sol;
	vector<int>::iterator it;

	cin >> stud >> sub;

	char data[stud][sub];

	for(int i=0;i<stud;i++)
	{
		for(int j=0;j<sub;j++)
		{
			cin >> data[i][j];
		}
	}

	/*
		Scan the data[][] matrix for the highest 
		scores for each subject and memorize the 
		index of the score.
	*/
		
	for(int i=0;i<sub;i++)
	{
		int temp,max=1;
		for(int j=0;j<stud;j++)
		{
			temp = data[j][i]  - '0';

			if(temp == max)
			{
				sub_sol.push_back(j);
			}

			if(temp > max)
			{
				max = temp;
				sub_sol.clear();
				sub_sol.push_back(j);
			}
			
		}
		for(it = sub_sol.begin();it != sub_sol.end();it++)
		{
			sol.insert(*(it));
		}
		sub_sol.clear();
	}

	

	cout << sol.size() << endl;

	return 0;
}
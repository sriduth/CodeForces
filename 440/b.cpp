#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	int T,fruits,last_ripening=-1,i,temp,temp_;
	unordered_map<int,int> M;
	cin >> T >> fruits;

	for(i=0;i<T;i++)
	{
		cin >> temp >> temp_;
		M[temp] += temp_;

		if(temp >= last_ripening)
			last_ripening = temp;
	}

	temp = 0;
	temp_ = fruits;

	for(i=1;i<=last_ripening+1;i++)
	{
		i--;
		fruits = temp_;
		if(M[i] != 0)
		{
			if(M[i] - fruits > 0)
			{
				temp += fruits;
				M[i] -= fruits;
				fruits = 0;
			}
			else
			{
				temp += M[i];
				fruits -= M[i];
				M[i] = 0;
			}
		}
		i++;
		if(fruits != 0)
		{
			if(M[i] != 0)
			{
				if(M[i] - fruits > 0)
				{
					temp += fruits;
					M[i] -= fruits;
					fruits = 0;
				}
				else
				{
					temp += M[i];
					fruits -= M[i];
					M[i] = 0;
				}
			}
		}
	}

	cout << temp << endl;
	return 0;
}
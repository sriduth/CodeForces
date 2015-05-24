#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int T;
	vector<float> P;
	vector<float>::reverse_iterator rit;
	float temp,sum=1;
	cin >> T;

	for(int i=0;i<T;i++)
	{
		cin >> temp;
		sum *= (1-temp);
		P.push_back(temp);
	}

	sort(P.begin(),P.end());

	temp = 0;
	for(rit = P.rbegin();rit != P.rend();++rit)
	{
		temp += *rit*(sum/(1-*rit));
	}

	if(temp > P[T-1])
		cout << temp;
	else
		cout << P[T-1];

	return 0;
}
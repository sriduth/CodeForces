#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int T,temp;
	vector<int> dat;
	dat.push_back(0);
	dat.push_back(1);
	dat.push_back(1);
	dat.push_back(2);
	dat.push_back(3);

	cin >> T;

	for(int i=1;;i++)
	{
		temp = dat[4] + dat[3];
		if(temp == T)
		{
			break;
		}
		dat.push_back(temp);
	}

	cout << dat[0] << " " << dat[1] << " " << dat[3] << endl;
	
	return 0;
}
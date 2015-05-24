#include <iostream>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	int T,chest=0,biceps=0,back=0,temp;

	cin >> T;

	temp = 1;
	while(T--)
	{
		if(temp == 1)
		{
			cin >> temp;
			chest += temp;
			temp = 2;
		}
		else if(temp == 2)
		{
			cin >> temp;
			biceps += temp;
			temp = 3;
		}
		else
		{
			cin >> temp;
			back += temp;
			temp = 1;
		}
	}

	T = max(max(chest,back),biceps);

	if(T == chest)
		cout << "chest" << endl;
	if(T == back)
		cout << "back" << endl;
	if(T == biceps)
		cout << "biceps" << endl;
	
	return 0;
}
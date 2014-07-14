#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	int p,n;
	unordered_map<int,int> map;
	bool flag = true;
	cin >> p >> n;

	for(int i=1;i<=n;i++)
	{
		int temp;

		cin >> temp;

		map[temp%p]++;

		if(map[temp%p] > 1){
			cout << i << endl;
			flag = false;
			break;
		}
	}

	if(flag)
		cout << "-1" << endl;

	return 0;
}
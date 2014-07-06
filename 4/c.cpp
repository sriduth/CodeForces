#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
	unordered_map<string,int> db;
	int T;
	string temp;

	cin >> T;

	/*
		Too much time, too much memory
	*/
	while(T--)
	{
		cin >> temp;
		db[temp]++;
		if(db[temp] > 1)
			cout << temp << db[temp]-1 << endl; 
		else
			cout << "OK" << endl;
	}

	db.clear();

	return 0;
}
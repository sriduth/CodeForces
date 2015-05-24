#include <iostream>
#include <cctype>
#include <set>
#include <string>

using namespace std;

int main()
{
	int n;
	char ch;
	set<char> s;

	cin >> n;
	
	while(n--)
 	{
 		cin >> ch;
 		s.insert(tolower(ch));
	}

	if(s.size() == 26)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
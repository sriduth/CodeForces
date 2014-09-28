#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
	string x;
	unordered_map<char,int> data;
	unordered_map<char,int> data2;
	unordered_set<char> s;

	cin >> x;

	for(char ch : x)
		data[ch]++;

	cin >> x;
	for(char ch : x){
		data2[ch]++;
		s.insert(ch);
	}

	int sol = 0;
	for(char ch : s){
		if(data[ch] == 0){
			cout << -1 << endl;
			return 0;
		}
		if(data2[ch] <= data[ch])
			sol += data2[ch];
		else
			sol += data[ch];
	}

	cout << sol << endl;
	return 0;
}

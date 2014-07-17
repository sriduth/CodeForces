#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
	string s,t;
	unordered_map<char,int> s_count,t_count;
	unordered_set<char> s_ch,t_ch;
	cin >> s >> t;

	if(t.length() > s.length())
	{
		cout << "need tree" << endl;
		return 0;
	}

	for(char ch : s){
		s_count[ch]++;
		s_ch.insert(ch);
	}

	for(char ch : t){
		t_count[ch]++;
		t_ch.insert(ch);
	}

	/*
		if maps are identical, this will happen :

			aryar -> array
			sriuthd -> sriduth

		I can definitely rearrange to get the second form.

	*/
	if(s_count == t_count)
	{
		cout << "array" << endl;
		return 0;
	}

	/*
		if t is in s, we will arrive at this situation:
		hello(worlds)
		worlds
	*/
	if(s.find(t) != string::npos)
	{
		cout << "automaton" << endl;
		return 0;
	}

	/*
		now let's consider this situation:
		hello('w'fg'o'hg'r'gh'l'x'd''s'gh)
		worlds

		where t is a seqence in s
	*/

	string mis = s;
	int point=0;
	bool flag = false;

	for(int i=0;i<mis.length();i++)
	{
		if(mis[i] == t[point])
			point++;
		if(point == t.length()){
			flag = true;
			break;
		}
	}

	/*
		If ordered sequence test passes.
	*/
	if(flag)
	{
		cout << "automaton" << endl;
		return 0;
	}

	/*
		Check if constituent characters of t are in s.
		ie check if t can be made of s.

		If you do not have the necessary characters to make
		t from s, kill it.
	*/

	for(pair<char,int> X : t_count)
	{
		if(!(s_count[X.first] >= X.second))
		{
			cout << "need tree" << endl;
			return 0;
		}
	}

	/*
		All that is left.
	*/
	cout << "both" << endl;

	return 0;
}
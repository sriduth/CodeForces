#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string S;
	int score=0;
	int max_val = -1;
	int letters_to_add;


	int alphabet[26];

	cin >> S >> letters_to_add;

	for(int i=0;i<26;i++)
	{
		cin >> alphabet[i];
		if(alphabet[i] >= max_val)
			max_val = alphabet[i];
	}

	for(int i=0;i<S.length();i++)
	{
		score += (i+1)*alphabet[(int)S[i]-97];
	}

	for(int i=S.length()+1;i<=S.length()+letters_to_add;i++)
	{
		score += i*max_val;
	}

	cout << score << endl;

	return 0;
}
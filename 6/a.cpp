#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int seq[4];

	cin >> seq[0] >> seq[1] >> seq[2] >> seq[3];

	sort(seq,seq+4);

	if(
		(seq[3] < seq[2] + seq[1]) || 
		(seq[3] < seq[2] + seq[0]) ||
		(seq[3] < seq[1] + seq[0]) ||
		(seq[2] < seq[1] + seq[0])
	)
	{
		cout << "TRIANGLE" << endl;
	}
	else if(
		(seq[3] == seq[2] + seq[1]) || 
		(seq[3] == seq[2] + seq[0]) ||
		(seq[3] == seq[1] + seq[0]) ||
		(seq[2] == seq[1] + seq[0])
	)
		cout << "SEGMENT" << endl;
	else
		cout << "IMPOSSIBLE" << endl;


	return 0;
}
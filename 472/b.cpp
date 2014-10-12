#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int people,capacity;

	cin >> people >> capacity;

	int line[people];

	for(int i=0;i<people;i++)
		cin >> line[i];
	
	sort(line,line+people);

	int solution = 0;

	for(int i=people-1;i >= 0;i -= capacity)
		solution += 2*(line[i]-1);

	cout << solution << endl;
	return 0;
}
#include <iostream>

using namespace std;

int main() {
	int n,skip,sol= 0,prev = -1;

	cin >> n >> skip;

	skip++;
	while(n--) {
		int start,end;

		cin >> start >> end;

		sol += (start+1)%skip + end - start;

		if(prev == (start-1) )
			sol--;

		prev = end;
	}

	cout << sol << endl;
	return 0;
}
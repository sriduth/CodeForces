/*
	gcc wont compile, some weird error.
	cl wsa used instead.
*/
#include <cstdio>
#include <deque>

using namespace std;

int main()
{
	// initializing queue
	deque<char> Q;

	// There must be a better way
	Q.push_back('s');
	Q.push_back('l');
	Q.push_back('p');
	Q.push_back('r');
	Q.push_back('h');

	int T;

	scanf("%d",&T);

	while(--T) // --T preincrement YO
	{
		/*
			Replicate at the back of queue then pop the first person.
		*/
		Q.push_back(Q.front());
		Q.push_back(Q.front());
		Q.pop_front();
		/*
			Problematic : for T ~ 10^9 !900 mb of memory and > few minutes.
			Recurrence relation is a possible solution?
		*/
	}

	
	if(Q[0] == 's')
		printf("Sheldon\n");

	else if(Q[0] == 'l')
		printf("Leonard\n");

	else if(Q[0] == 'p')
		printf("Penny\n");

	else if(Q[0] == 'r')
		printf("Rajesh\n");

	else if(Q[0] == 'h')
		printf("Howard\n");

	return 0;
}
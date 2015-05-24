#include <cstdio>

using namespace std;

int main()
{
	int T,units=0,tens=0;
	scanf("%d",&T);

	if(T >= 0)
		printf("%d\n",T);

	else
	{
		T = -T;
		units = T%10;
		// Remove Last Digit
		T = T/10;
		tens = T%10;
		T = T-T%10;

		if(units > tens)
		{
			T = T+tens;
			T = -T;
			printf("%d\n",T);
		}
		else
		{
			T = T+units;
			T = -T;
			printf("%d\n",T);
		}
	}
	return 0;
}
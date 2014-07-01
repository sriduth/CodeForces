#include <iostream>

using namespace std;

int main()
{
	 long long T,K,E,O;
	 cin >> T >> K;

	 /*
	   if N is even N/2 numbers are even in range [1,N]
	   else (N-1)/2 numbers are even in range [1,N]
	 */

	if(T%2 == 0)
	{
		E = T/2;
		O = T/2;
	}
	else
	{
		E = (T-1)/2;
		O = T - E;
	}

	if(K > O)
	{
		T = (K-O)*2;
	}
	else
	{
		T = K*2 - 1;
	}

	cout << T << endl;

}

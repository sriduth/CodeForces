#include <iostream>
#include <cstring>

using namespace std;

bool arr[1000000007];

void markMultiples(int a)
{
    long int i = 2, num;
    while ( (num = i*a) <= 1000000007  )
    {
        arr[ num-1 ] = 1;
        ++i;
    }
}
 
void SieveOfEratosthenes()
{
        memset(arr, 0, sizeof(arr));
        for (long int i=1; i<1000000007; ++i)
        {
            if ( arr[i] == 0 )
                markMultiples(i+1);
        }
}
int main()
{
	SieveOfEratosthenes();
	int a,b;
	cin >> a >> b;
	long int sum = 0;
	for(long int i=0;i<1000000007;i++)
	{
		if(!arr[i])
		{
			long int quot = (i - i%b)/b;
			if((i%b) != 0)
			{
				if(quot/(i%b) <= a){
					sum += i;
					sum %= 1000000007;
				}
			}	
		}
	}

	cout << sum << endl;
	return 0;
}
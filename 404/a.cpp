#include <iostream>
#include <string>

using namespace std;

int main()
{
	int T;
	char X,Y;
	string row;

	cin >> T;

	cin >> row;

	X = row[0];
	Y = row[1];

	// Careless Mistake
	if(X == Y)
	{
		cout << "NO" << endl;
		return 0;
	}
	if(row[0] == row[T-1])
	{
		for(int i=1;i<T-1;i++)
		{
			if(row[i] != Y)
			{
				cout << "NO" << endl;
				return 0;
			}
		}
		for(int j = 1;j<T;j++)
		{
			cin >> row;
			// Another careless mistake 2
			if(row[j] != X || row[T-j-1] != X)
			{
				cout << "NO" << endl;
				return 0;
			}
			// Another careless mistake 3 splllaaaAAASSSShSHH
			else if(row[j] == X && row[T-j-1] == X)
			{
				for(int k=0;k<T;k++)
				{
					// Yet another careless mistake
					if(k != j && k != T-j-1){

						if(row[k] != Y)
						{
							cout << "NO" << endl;
							return 0;
						}
					}
					else
					{
						if(row[k] != X)
						{
							cout << "NO" << endl;
							return 0;
						}
					}		
				}
			}
		}

		cout << "YES" << endl;
	}	
	else
		cout << "NO" << endl;

	return 0;
}
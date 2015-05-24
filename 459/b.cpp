#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int T;

	cin >> T;

	long data[T];
	for(int i=0;i<T;i++)
		cin >> data[i];

	sort(data,data+T);

	long long a=0,b=0;

	for(int i=0;i<T;i++){
		if(data[i] != data[0]) 
			break;
		++a;
	}

	for(int i=T-1;i >= 0;--i){
		if(data[i] != data[T-1])
			break;
		++b;
	}

	if(data[0] == data[T-1]){
		a = a*(a-1)/2;
	}
	else
		a = a*b;

	cout << data[T-1] - data[0] << " " << a << endl;
	return 0;
}
#include <iostream>

using namespace std;

int main(){

	int T,Q;
	int o=0,no=0;

	cin >> T >> Q;

	int data[T+1];
	int sum[T+1];
	data[0] = 0;
	sum[0] = 0;
	for(int i=1;i<=T;i++){
		int x;
		cin >> x;
		sum[i] = sum[i-1] + x;
		if(x == 1){
			o++;
			data[i] = data[i-1] + 1;
		}
		else{
			no++;
			data[i] = data[i-1];
		}
	}

	while(Q--){
		int a,b;
		cin >> a >> b;
		if( sum[b] - sum[a-1] == 0)
			cout << "1" << endl;
		else if((b-a+1)%2 == 0){
			int diff = sum[b] - sum[a-1];
			if(diff > 0 && diff%2 == 0 && (no - data[b] - data[a-1]) > diff/2)
				cout << "1" << endl;
			else if(diff < 0 && diff%2 && (o -(diff - data[b] - data[a-1])) > diff/2)
				cout << "1" << endl;
			elsen
				cout << "0" << endl;
		}
		else
			cout << "0" <<endl;
	}
	return 0;
}
#include <iostream>
using namespace std;

int main(){
	int cells, target;	

	cin >> cells >> target;
	int line[cells+1];


	for(int j=1;j<cells;j++){
		cin >> line[j];	
	}	
	
	for(int i=1;i<=target; i+= line[i]){
		if(i == target){
			cout << "YES" << endl;
			return 0;
		}
		else if(i > target){
			cout << "NO" << endl;
			return 0;
		}		
	}

	cout << "NO" << endl;
	return 0;
}
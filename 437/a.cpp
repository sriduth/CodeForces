#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<int,char> data;
	map<int,char>::iterator it;
	for(int i=0;i<4;i++){
		string x;
		cin >> x;
		data[ x.length()-2 ] = x[0];
	}

	it = data.begin();
	int min_value = it->first;
	bool flag = true;
	it++;
	while(it != data.end())
	{
		if(!(it->first >= min_value*2)){
			flag = false;
			break;
		}
		it++;
	}
	if(flag){
		it = data.begin();
		cout << it->second << endl;
	}
	else{
		flag = true;
		it = data.end();
		int max_value = it->second;
		it = data.begin();

		for(int i=0;i<3;i++){
			if(!((it->first)*2 <= max_value)){
				flag = false;
				break;
			}
			it++;
		}
		if(flag){
			it = data.end();
			cout << it->second << endl;
		}
		else
			cout << "C" << endl;
	}
	return 0;
}
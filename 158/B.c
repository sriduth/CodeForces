#include <stdio.h>
#include <stdlib.h>

int main()
{
	int T, temp;
	register int _four=0,_three=0,_two=0,_one=0,i,count=0;
	scanf("%d",&T);

	// get the team strengths
	for(i=0;i<T;i++)
	{
		scanf("%d",&temp);
		if(temp == 4)
			_four++;
		if(temp == 3)
			_three++;
		if(temp == 2)
			_two++;
		if(temp == 1)
			_one++;
	}

	count += _four; // Each tam of four gets a taxi
	count += _three; // Each team of three gets a taxi +1 of a solo man

	// now we sqeeze te solo guys in with the three teams
	if(_three >= _one)
		_one = 0;

	if(_three <= _one)
		_one = _one - _three;

	/*
		Fill the taxis with teams having 2 people, each taxi 
		here we do %2 because each tema of two has two members
	*/

	count = count + (_two - _two%2)/2;
	_two = _two%2;

	/*
		All teams of 4 and 3 are fully seated, along with as many solo players 
		as teams of 3 and all teams of two except for one and with at most and
		at least 1 team of 2 members
	*/

	//_two = _two + _one;

	_one = _one + _two*2;

	// Seating the teams if /4
	if(_one % 4 == 0)
		count = count + _one/4;

	// Seating the teams if !/4, +1 taxif for the remaining players
	else
		// DO NOT FORGET BRACKETS!!
		// On the other hand you actually can -_-
		count = count + ((_one - _one%4)/4) + 1;

	printf("%d\n",count);

	return 0;
}
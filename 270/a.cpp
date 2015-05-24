#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int T;
	float angle;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%f",&angle);

		angle = 360/(180 - angle);
		if(angle == floor(angle))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
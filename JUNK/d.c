#include <stdio.h>

int main()
{
	struct emp
	{
		char *data;
		int num;
	};

	struct emp a = {"Sriduth", 20};
	struct emp b = a;
	strupr(b.data);

	printf("%s\n%s\n",a.data,b.data);

	return 0;
}
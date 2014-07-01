	#include <stdio.h>
	#include <stdlib.h>

	main()
	{
		int T,J, *types, *heights, *masses, i,j,temp=0,current,count=0;
		int t,h,m;

		scanf("%d%d",&T,&J);

		types = malloc(sizeof(int)*T);
		heights = malloc(sizeof(int)*T);
		masses = malloc(sizeof(int)*T);

		current = -666;

		for(i=0;i<T;i++)
		{
			scanf("%d%d%d",&t,&h,&m);

			if(t != current && h <= J)
			{
				J += m;
				current = t;
				count ++;
			}
			else
			{
				types[temp] = t;
				heights[temp] = h;
				masses[temp] = m;
				temp++;
			}
		}

		i = T*(T-1)/2;

		current = -666;


		while(i-- && T)
		{
			t = -666;
			for(j=0;j<=temp;j++)
			{
				//dumbfuck V2 -_-
				if(types[j] != current && J >= heights[j] && heights[j] != -666)
				{
					J += masses[j];
					current = types[j];
					T--;
					heights[j] = -666;
					count++;
					t = 666;
				}
				if(T == 0)
				{
					t = -666;
					break;
				}
			}
			if(t == -666)
				break;
		}

		printf("%d\n",count);
	}
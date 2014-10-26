import java.io.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

		String[] dat = reader.readLine().split(" ");

		long x = Long.parseLong(dat[0]);
		long y = Long.parseLong(dat[1]);

		for(long i=x;i<=y;i++)
		{
			for(long j=i+1;j<=y;j++)
			{
				if(gcd(i,j) == 1)
				{
					for(long k=j+1;k<=y;k++)
					{
						if(gcd(j,k) == 1)
						{
							if(gcd(i,k) != 1)
							{
								System.out.println(i+" "+j+" "+k);
								return;							
							}
						}
					}
				}
			}
		}
		System.out.println("-1");
	}

	static long gcd(long a, long b)
	{
	    long temp;
	    while (b != 0)
	    {
	        temp = a % b;

	        a = b;
	        b = temp;
	    }
	    return a;
	}
}
import java.io.*;


class main
{

	/*
		Very lazy today.
		Dont want to hardcode >_<
	*/
	static int gcd(int a,int b)
	{
		int tmp;
		while(b != 0)
		{
			tmp = a%b;

			a=b;
			b=tmp;
		}
		return a;
	}

	public static void main(String args[])
	{
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));

		try
		{
			String[] yakkoWakko = inputReader.readLine().split(" ");

			int y = Integer.parseInt(yakkoWakko[0]);
			int w = Integer.parseInt(yakkoWakko[1]);

			int win = 0;

			if(y > w)
				win = 6-y+1;
			else
				win = 6-w+1;

			w = gcd(win,6);

			System.out.println((win/w)+"/"+(6/w));
		}
		catch(IOException ioexcep)
		{
			/*
				Handle it.
			*/
		}
	}
}
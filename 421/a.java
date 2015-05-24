import java.io.*;

class main
{
	public static void main(String args[])
	{
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));

		try
		{
			String[] applesArthurAlex = inputReader.readLine().split(" ");

			int apples = Integer.parseInt(applesArthurAlex[0]);
			int arthur = Integer.parseInt(applesArthurAlex[1]);
			int alex   = Integer.parseInt(applesArthurAlex[2]);

			int[] applesEaten = new int[apples];
			String[] arthurApples = inputReader.readLine().split(" ");
			String[] alexApples = inputReader.readLine().split(" ");

			for(int i=0;i<arthurApples.length;i++)
			{
				applesEaten[ Integer.parseInt(arthurApples[i]) - 1 ] = 1;
			}


			for(int i=0;i<alexApples.length;i++)
			{
				if(applesEaten[ Integer.parseInt(alexApples[i]) - 1 ] != 1)
					applesEaten[ Integer.parseInt(alexApples[i]) -1 ] = 2;
			}

			for(int i=0;i<apples;i++)
			{
				System.out.print(applesEaten[i]+" ");
			}
		}
		catch(IOException ioexcep)
		{
			/*
				Handle it.
			*/
		}
	}
}


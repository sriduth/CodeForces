import java.io.*;

class main
{
	public static void main(String args[])
	{
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));

		try
		{
			int ranks = Integer.parseInt(inputReader.readLine());
			String[] exp = inputReader.readLine().split(" ");
			String[] levelUp = inputReader.readLine().split(" "); 
		
			int time = 0;
			/*
				Years needed = sum of exp needed to go from rank k to rank j.
			*/
			for(int i=Integer.parseInt(levelUp[0]);i<Integer.parseInt(levelUp[1]);i++)
			{
				time += Integer.parseInt(exp[i-1]);
			}

			System.out.println(time);
		}
		catch(IOException ioexception)
		{
			/*
				Handle it.
			*/
		}
	}
}
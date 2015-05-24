import java.io.*;

class main
{
	public static void main(String args[])
	{
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));

		try
		{
			long count = Long.parseLong(inputReader.readLine());
			String[] numbers = inputReader.readLine().split(" ");

			/*
				Kind of a set difference implementation.
			*/
			count = (count*(count+1))/2;

			for(int i=0;i<numbers.length;i++)
			{
				count = count - Integer.parseInt(numbers[i]);
			}

			System.out.println(count);

		}
		catch(IOException ioexcep)
		{
			/*
				Handle it.
			*/
		}
	}
}
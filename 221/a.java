import java.io.*;

class main
{
	public static void main(String args[])
	{
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));
		try
		{
			int elephant = Integer.parseInt(inputReader.readLine());

			System.out.print(elephant+" ");

			for(int i=1;i<elephant;i++)
			{
				System.out.print(i+" ");
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
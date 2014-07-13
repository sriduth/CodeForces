import java.io.*;

class main
{
	public static void main(String args[])
	{
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));

		try
		{
			int digits = Integer.parseInt(inputReader.readLine());
			String number = inputReader.readLine();

			for(int i=0;i<digits;i++)
			{
				if(number.charAt(i) != '4' && number.charAt(i) != '7')
				{
					System.out.println("NO");
					System.exit(0);
				}
			}

			int preHalf = 0;
			int postHalf = 0;

			for(int i=0;i<digits/2;i++)
			{
				preHalf += Character.getNumericValue(number.charAt(i));
				postHalf += Character.getNumericValue(number.charAt(digits-i-1));
			}

			if(preHalf == postHalf)
				System.out.println("YES");
			else
				System.out.println("NO");
		}
		catch(IOException ioexcep)
		{
			/*
				Handle It.
			*/
		}
	}
}
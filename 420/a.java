import java.io.*;
import java.util.*;

class main
{
	public static void main(String args[])
	{
		BufferedReader inputStream = new BufferedReader(new InputStreamReader(System.in));

		try
		{
			Set<Character> mirrorLetters = new HashSet<Character>(Arrays.asList('A','H','I','M','O','T','U','V','W','X','Y'));

			String input = inputStream.readLine();
			String reversedInput = new StringBuilder(input).reverse().toString();

			if(input.equals(reversedInput))
			{
				for(int i=0;i<reversedInput.length();i++)
				{
					if(!mirrorLetters.contains(reversedInput.charAt(i)))
					{
						System.out.println("NO");
						System.exit(0);
					}
				}

				System.out.println("YES");
			}
			
			else
				System.out.println("NO");
		}
		catch(IOException ioexcep)
		{
			/*
				Handle it
			*/
		}
	}
}
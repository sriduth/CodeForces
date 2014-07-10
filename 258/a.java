import java.io.*;

class main
{
	public static void main(String args[])
	{
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));
		
		try
		{
			String bits = inputReader.readLine();
			int zeroIndex = -666;	
			
			for(int i=0;i<bits.length();i++)
			{
				if(bits.charAt(i) == '0')
				{
					zeroIndex = i;
					break;
				}
			}

			if(zeroIndex != -666)
			{
				for(int i=0;i<bits.length();i++)
				{
					if(i != zeroIndex)
						System.out.print(bits.charAt(i));
				}
			}	
			else
			{
				for(int i=1;i<bits.length();i++)
				{
					System.out.print(bits.charAt(i));
				}
			}	
		}

		catch(IOException ioexcep)
		{
			//
		}
		
	}
}
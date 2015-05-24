import java.io.*;

class main
{
	public static void main(String args[])
	{
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));

		try
		{
			String[] rowsColumns = inputReader.readLine().split(" ");

			int rows = Integer.parseInt(rowsColumns[0]);
			int columns = Integer.parseInt(rowsColumns[1]);

			char w = 'B';
			char b = 'W';
			char t = '-';

			for(int i=0;i<rows;i++)
			{
				String row = inputReader.readLine();

				t = w;
				w = b;
				b = t;

				for(int j=0;j<columns;j++)
				{
					if(row.charAt(j) == '-')
						System.out.print("-");
					else if(row.charAt(j) == '.' && j%2==0)
						System.out.print(b);
					else if(row.charAt(j) == '.' && j%2!=0)	
						System.out.print(w);			
				}
				System.out.println(); 
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
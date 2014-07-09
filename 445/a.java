import java.io.*;

class main
{
	public static void main(String args[])
	{
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));

		try
		{
			String[] inputs = inputReader.readLine().split(" ");
			int x = Integer.parseInt(inputs[0]);
			int y = Integer.parseInt(inputs[1]);

			char[][] board = new char[x][y];

			char b = 'W';
			char w = 'B';
			char temp = '-';
			for(int i=0;i<x;i++)
			{
				temp = b;
				b = w;
				w = temp;
				for(int j=0;j<y;j++)
				{
					if(j%2 == 0)
						board[i][j] = b;
					else
						board[i][j] = w;
				}	
			}

			for(int i=0;i<x;i++)
			{
				String input = inputReader.readLine();
				for(int j=0;j<y;j++)
				{
					if(input.charAt(j) == '-')
						System.out.print('-');
					else
						System.out.print(board[i][j]);
				}	
		
			}
		}
		catch(IOException ioexcep_)
		{
			/*
				Deal with it
			*/
		}
	}
}
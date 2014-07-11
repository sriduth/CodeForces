import java.io.*;

class main{

	public static void main(String args[])
	{
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));

		try
		{
			String sequence = inputReader.readLine();

			int count =0;
			boolean flag = true;
		
			for(int i=0;i<sequence.length();i++)
			{
				char current = sequence.charAt(i);

				for(int j=i;j<4+i && j < sequence.length()-1;j++)
				{
					if(sequence.charAt(j+1) != current)
					{
						count++;
						i = j;
						flag = false;
						break;
					}
				}
				if(flag == true)
				{
					i = i+4;
					count++;
				}
				flag = true;
			}

			System.out.println(count);
		}
		catch(IOException ioexcep)
		{
			/*
				Handle It
			*/
		}
	}
}
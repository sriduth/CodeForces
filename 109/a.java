import java.io.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		int reqSum = Integer.parseInt(reader.readLine());

		// Outer loop keeps adding sevens
		// Inner loop adds fours
		
		int fours = -1;
		int sevens = -1;

		for(int i=0;i*4 <= reqSum;i++)
		{
			int rem = reqSum - i*4;
			if(rem%7 == 0)
			{
				fours = i;
				sevens = rem/7;
				break;
			}
		}

		StringBuilder solBuilder = new StringBuilder();

		if(fours != -1 && sevens != -1)
		{
			for(int i=0;i<fours;i++)
				solBuilder.append("4");
			for(int i=0;i<sevens;i++)
				solBuilder.append("7");
		}
		else
			solBuilder.append("-1");

		writer.write(solBuilder.toString());
		writer.flush();
	}
}
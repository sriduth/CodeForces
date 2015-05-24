import java.io.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		int T = Integer.parseInt(reader.readLine());
		String[] seq = reader.readLine().split(" ");

		int hire = 0;
		int lost = 0;
		for(int i=0;i<T;i++)
		{
			if(!seq[i].equals("-1"))
				hire += Integer.parseInt(seq[i]);
			else
			{
				if(hire == 0)
					lost++;
				else
					hire--;
			}
		}

		writer.write(Integer.toString(lost));
		writer.flush();
	}
}
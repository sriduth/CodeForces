import java.io.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		String a = reader.readLine();
		String b = reader.readLine();

		int diffSeven = 0;
		int diffFour = 0;

		for(int i=0;i<a.length();i++)
		{
			if(a.charAt(i) != b.charAt(i))
			{
				if(a.charAt(i) == '7')
					diffSeven++;
				else
					diffFour++;
			}
		}

		writer.write(Integer.toString(Math.max(diffFour,diffSeven)));
		writer.flush();
	}
}
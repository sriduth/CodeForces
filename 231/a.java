import java.io.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

		int n = Integer.parseInt(reader.readLine());
		int count = 0;

		for(int i=0;i<n;i++)
		{
			String str = reader.readLine();
			if(
				str.equals("1 0 1") ||
				str.equals("1 1 1") ||
				str.equals("1 1 0") ||
				str.equals("0 1 1")
			)
				count++;
		}

		System.out.println(count);
	}
}
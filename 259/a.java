import java.io.*;

class main
{
	private static String rowA = "WBWBWBWB";
	private static String rowB = "BWBWBWBW";

	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

		for(int i=0;i<8;i++)
		{
			String str = reader.readLine();
			if(!str.equals(rowB) && !str.equals(rowA))
			{
				System.out.println("NO");
				return;
			}
		}

		System.out.println("YES");
	}
}
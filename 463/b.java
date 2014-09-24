import java.io.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		int count = Integer.parseInt(reader.readLine());
		String[] data = reader.readLine().split(" ");

		int max = 0;
		for(int i = 0;i<count;i++)
		{
			max = Math.max(max,Integer.parseInt(data[i]));
		}

		writer.write(Integer.toString(max));
		writer.flush();
	}
}
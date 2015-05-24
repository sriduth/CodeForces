import java.io.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		String[] board = reader.readLine().split(" ");

		int sum = 0;

		for(String str : board)
			sum += Integer.parseInt(str);

		int a = 
	}
}
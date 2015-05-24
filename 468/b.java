import java.io.*;
import java.util.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		String[] data = reader.readLine().split(" ");
		
		Set<String> times = new LinkedHashSet<String>();
		Set<String> offsettimes = new LinkedHashSet<String>();

		for(int i=0;i<Integer.parseInt(data[0]);i++)
		{
			String a = reader.readLine();
			times.add(a);
		}

		for(int i=0;i<Integer.parseInt(data[1]);i++)
		{
			String b = reader.readLine();
			offsettimes.add(b);
		}

		int count = 0;

		for(int i=Integer.parseInt(data[2]);i<=Integer.parseInt(data[3]);i++)
		{
			for(String str : offsettimes)
			{
				String[] temp = str.split(" ");
								
				int x = Integer.parseInt(temp[0]);
				int y = Integer.parseInt(temp[1]);
			}
		}

		writer.write(Integer.toString(count));
		writer.flush();
	}
}
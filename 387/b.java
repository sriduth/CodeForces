import java.io.*;
import java.util.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		String[] set = reader.readLine().split(" ");

		Stack<String> good = new Stack<String>();
		Stack<String> current = new Stack<String>();

		String[] goodAsSting = reader.readLine().split(" ");

		for(String str : goodAsSting)
			good.push(str);

		String[] currentAsString = reader.readLine().split(" ");

		for(String str : currentAsString)
			current.push(str);

		int solution = 0;

		while(!current.empty() && !good.empty())
		{
			int a = Integer.parseInt(good.peek());
			int b = Integer.parseInt(current.peek());

			if(a > b)
			{
				good.pop();
				solution++;
			}
			else
			{
				good.pop();
				current.pop();
			}
		}

		solution += good.size();
		writer.write(Integer.toString(solution)+"\n");
		writer.flush();

	}
}
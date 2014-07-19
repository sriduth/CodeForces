import java.io.*;
import java.util.*;

class main
{
	public static void main(String[] args) {
		
		BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));
		Set<Integer> dpFill = new LinkedHashSet<Integer>();

		try
		{
			String[] ipQueries = input.readLine().split(" ");
			String[] lValues = input.readLine().split(" ");

			int n = Integer.parseInt(ipQueries[0]);
			int m = Integer.parseInt(ipQueries[1]);
			int[] dp = new int[n];

			/*
				dp[i] holds number of unique values from i to n-1. 
			*/
			for(int i=n-1;i >= 0;--i)
			{
				dpFill.add(Integer.parseInt(lValues[i]));
				dp[i] = dpFill.size();
			}

			for(int i=0;i < m;i++)
			{
				int query = Integer.parseInt(input.readLine());
				writer.write(Integer.toString(dp[query-1]));
				writer.write("\n");
			}

			writer.flush();
		}
		catch(IOException ioexcept)
		{

		}
	}
}
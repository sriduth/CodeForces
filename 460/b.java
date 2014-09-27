import java.io.*;
import java.util.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		String[] coefficients = reader.readLine().split(" ");

		int a = Integer.parseInt(coefficients[0]);
		int b = Integer.parseInt(coefficients[1]);
		int c = Integer.parseInt(coefficients[2]);

		SortedSet<Integer> data = new TreeSet<Integer>();

		for(int i=1;i<=81;i++)
		{
			double x = b*Math.pow(i,a) + c;

			if(x < 1000000000)
			{
				int y = (int) x;
				if(SumOfDigits(Integer.toString(y)) == i)
					data.add(y);
			}
			
		}

		writer.write(Integer.toString(data.size())+"\n");
		for(Integer i : data)
			writer.write(Integer.toString(i)+" ");

		writer.flush();

	}

	public static int SumOfDigits(String x)
	{
		int l = 0;
		for(int i=0;i<x.length();i++)
			l += Character.getNumericValue(x.charAt(i));
		
		return l;
	}
}
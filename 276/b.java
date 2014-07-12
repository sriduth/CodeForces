/*
	Java can not handle integers in the range of C++'s long long type.
	This is why java failed here but not C++.
*/
import java.io.*;
import java.util.*;
import java.math.*;

class main
{
	public static void main(String args[])
	{
		Map<Integer,Integer> pairs = new HashMap<Integer,Integer>();
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));

		try
		{
			int count = Integer.parseInt(inputReader.readLine());
			String[] values = inputReader.readLine().split(" ");

			for(int i=0;i<count;i++)
			{
				int value = Integer.parseInt(values[i]);
				if(pairs.containsKey(value))
					pairs.put(value, pairs.get(value)+1);
				
				else
					pairs.put(value,1);
			}

			/*
				Another careless mistake!
			*/
			BigInteger totalPairs = BigInteger.ZERO;

			/*
				Dont try to remove Map.Entry.getKey() from Map pairs.
				It results in ConcurrentModificationException.
			*/
			for(Map.Entry<Integer,Integer> entry : pairs.entrySet())
			{
				if(pairs.containsKey(-entry.getKey()) && entry.getKey().longValue() > 0)
				{
					totalPairs = totalPairs.add(new BigInteger(Integer.toString(entry.getValue()*pairs.get(-(entry.getKey())))));
				}
			}

			/*
				Careless!
			*/
			if(pairs.containsKey(0))
				totalPairs = totalPairs.add(new BigInteger(Integer.toString((pairs.get(0)*(pairs.get(0)-1))/2)));

			System.out.println(totalPairs);
		}
		catch(IOException ioexcep)
		{
			/*
				Handle it.
			*/
		}
	}
}
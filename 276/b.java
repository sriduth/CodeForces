/*
	Java can not handle integers in the range of C++'s long long type.
	This is why java failed here but not C++.
*/
import java.io.*;
import java.util.*;

class main
{
	public static void main(String args[])
	{
		Map<Long,Long> pairs = new HashMap<Long,Long>();
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));

		try
		{
			int count = Integer.parseInt(inputReader.readLine());
			String[] values = inputReader.readLine().split(" ");

			for(int i=0;i<count;i++)
			{
				long value = Long.parseLong(values[i]);
				if(pairs.containsKey(value))
					pairs.put(value, pairs.get(value)+1L);
				
				else
					pairs.put(value,1L);
			}

			/*
				Another careless mistake!
			*/
			long totalPairs = 0L;

			/*
				Dont try to remove Map.Entry.getKey() from Map pairs.
				It results in ConcurrentModificationException.
			*/
			for(Map.Entry<Long,Long> entry : pairs.entrySet())
			{
				if(pairs.containsKey(-entry.getKey()) && entry.getKey().longValue() > 0)
				{
					totalPairs += entry.getValue()*pairs.get(-(entry.getKey()));
				}
			}

			/*
				Careless!
			*/
			if(pairs.containsKey(0))
				totalPairs += (pairs.get(0)*(pairs.get(0)-1L))/2;

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
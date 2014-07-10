import java.io.*;
import java.util.*;

class main
{
	public static void main(String args[])
	{
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));

		try
		{
			int count = Integer.parseInt(inputReader.readLine());
			String[] id = inputReader.readLine().split(" ");
			Map<String,Integer> myMap = new HashMap<String,Integer>();

			for(int i=0;i<count;i++)
			{
				if(Integer.parseInt(id[i]) > 0)
				{	
					if(myMap.containsKey(id[i]))
					{
						myMap.put(id[i],myMap.get(id[i])+1);
					}
					else{

						myMap.put(id[i],1);
					}
					
				}
			}

			int talks = 0;
			for(Map.Entry<String, Integer> entry : myMap.entrySet())
			{
				if(entry.getValue()  == 2)
				{
					talks++;
				}
				else if(entry.getValue() > 2)
				{
					talks = -1;
					break;
				}
			}

			System.out.println(talks);

		}
		catch(IOException ioexcep)
		{
			/*
				Handle it.
			*/
		}
	}
}
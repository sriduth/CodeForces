import java.io.*;
import java.util.*;

class main
{
	public static void main(String args[])
	{
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));

		try
		{
			HashMap<String,Integer> scoreTable = new HashMap<String,Integer>();
			int goals = Integer.parseInt(inputReader.readLine());

			for(int i=0;i<goals;i++)
			{
				String teamScore = inputReader.readLine();

				if(scoreTable.containsKey(teamScore))
				{
					scoreTable.put(teamScore,scoreTable.get(teamScore)+1);
				}
				else
				{
					scoreTable.put(teamScore,1);
				} 
			}

			Map.Entry<String,Integer> winningTeam = null;
			for(Map.Entry<String,Integer> entry : scoreTable.entrySet())
			{
				if (winningTeam == null || entry.getValue().compareTo(winningTeam.getValue()) > 0 )
       				winningTeam = entry;
			}

			System.out.println(winningTeam.getKey());
		}
		catch(IOException ioexcep)
		{
			/*
				Handle it.
			*/
		}
	}
}
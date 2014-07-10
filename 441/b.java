import java.io.*;
import java.util.*;
import java.lang.*;

class main
{
	public static void main(String args[])
	{
		Set<Integer> chemOne = new HashSet<Integer>();
		Set<Integer> chemTwo = new HashSet<Integer>();
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));

		try
		{
			String[] chemPair = inputReader.readLine().split(" ");
			int chem = Integer.parseInt(chemPair[0]);
			int pairs = Integer.parseInt(chemPair[1]);
			int dangChem=0;
		
			for(int i=0;i<pairs;i++)
			{
				String[] comp = inputReader.readLine().split(" ");
				chemOne.add(Integer.parseInt(comp[0]));
				chemTwo.add(Integer.parseInt(comp[1]));
			}

			dangChem = (int)Math.pow(2,pairs - Math.abs(chemOne.size() - chemTwo.size()));
			System.out.println(dangChem);
		}

		catch(IOException ioexcep)
		{

		}
	}
}
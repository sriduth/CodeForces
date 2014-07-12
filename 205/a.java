import java.io.*;
import java.util.*;

class main
{
	public static void main(String args[])
	{
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));
		ArrayList<Integer> distances = new ArrayList<Integer>();
		try
		{
			int distanceLimit = Integer.parseInt(inputReader.readLine());
			String[] distanceString = inputReader.readLine().split(" ");

			if(distanceLimit == 1)
			{
				System.out.println("1");
				System.exit(0);
			}
			for(int i=0;i<distanceLimit;i++)
			{
				distances.add(Integer.parseInt(distanceString[i]));
			}

			Collections.sort(distances);

			/*
				List and other containers do not take primitives as
				arguments.

				To compare two int we can use ==
				To compare two Integer objects ew need to use Integer.equals().
				== in this case tests referential equality.
			*/

			if(!distances.get(0).equals(distances.get(1)))
			{
				int index = Arrays.asList(distanceString).indexOf(Integer.toString(distances.get(0)));
				System.out.println(index+1);
			}
			else
				System.out.println("Still Rozdil");
		}
		catch(IOException ioexcep)
		{
			/*
				Handle it.
			*/
		}
	}
}
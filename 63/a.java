import java.io.*;
import java.util.*;

class main
{
	public static void main(String[] args) {

		BufferedReader inputStream = new BufferedReader(new InputStreamReader(System.in));

		/*
			LinkedHashMap maintains insertion order.
			Was screwing around trying to implement LinkedHashMap before
			stackoverflow epiphany. I'll do LinkedHashSet implementation later.
		*/

		Map<String,Integer> crewRats= new LinkedHashMap<String,Integer>();
		Map<String,Integer> crewWomenKids = new LinkedHashMap<String,Integer>();
		Map<String,Integer> crewMen = new LinkedHashMap<String,Integer>();
		String captain = new String("");

		try
		{
			int crew = Integer.parseInt(inputStream.readLine());

			for(int i=1;i<=crew;i++)
			{
				String[] crewMember = inputStream.readLine().split(" ");

				if(crewMember[1].equals("man"))
					crewMen.put(crewMember[0],i);
				if(crewMember[1].equals("woman"))
					crewWomenKids.put(crewMember[0],i);
				if(crewMember[1].equals("rat"))
					crewRats.put(crewMember[0],i);
				if(crewMember[1].equals("child"))
					crewWomenKids.put(crewMember[0],i);
				if(crewMember[1].equals("captain"))	
					captain += crewMember[0];
			}

			for(Map.Entry<String,Integer> entry : crewRats.entrySet())
				System.out.println(entry.getKey());

			for(Map.Entry<String,Integer> entry : crewWomenKids.entrySet())
				System.out.println(entry.getKey());

			for(Map.Entry<String,Integer> entry : crewMen.entrySet())
				System.out.println(entry.getKey());

			System.out.println(captain);

		}

		catch(IOException ioexcept)
		{
			/*
				Handle It.
			*/
		}
		
	}
}
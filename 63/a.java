import java.io.*;
import java.util.*;

class main
{
	public static void main(String[] args) {
		
		BufferedReader inputStream = new BufferedReader(new InputStreamReader(System.in));

		/*
			Using LinkedHashSet allows retrieval in order if insertion.
		*/
		Set<String> rats = new LinkedHashSet<String>();
		Set<String> womenKids = new LinkedHashSet<String>();
		Set<String> men = new LinkedHashSet<String>();
		String captain = "";

		try
		{
			int count = Integer.parseInt(inputStream.readLine());

			for(int i=0;i<count;i++)
			{
				String[] crewMember = inputStream.readLine().split(" ");

				if(crewMember[1].equals("rat"))
					rats.add(crewMember[0]);
				if(crewMember[1].equals("woman"))
					womenKids.add(crewMember[0]);
				if(crewMember[1].equals("child"))
					womenKids.add(crewMember[0]);
				if(crewMember[1].equals("man"))
					men.add(crewMember[0]);
				if(crewMember[1].equals("captain"))
					captain += crewMember[0];

			}

			for(String crew : rats)
				System.out.println(crew);

			for(String crew : womenKids)
				System.out.println(crew);

			for(String crew : men)
				System.out.println(crew);

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
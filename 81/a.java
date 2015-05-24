import java.io.*;
import java.util.*;

class main
{
	public static void main(String[] args) {
		
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		Set<Character> sol = new LinkedHashSet<Character>();
		try
		{
			String data = reader.readLine();

			for(int i=0;i<data.length();i++)
			{
				if(sol.contains(data.charAt(i)))
					sol.remove(data.charAt(i));
				else
					sol.add(data.charAt(i));
			}

			for(Character ch : sol)
				writer.write(ch);

			writer.flush();
		}

		catch(IOException ioexcept)
		{

		}
	}
}
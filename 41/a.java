import java.io.*;

class main
{
	public static void main(String[] args) {
		
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		try
		{
			String berland = reader.readLine();
			String birdland = reader.readLine();

			/*
				Reverse the string using string builder.
			*/
			String translate = new StringBuilder(berland).reverse().toString();

			if(birdland.equals(translate))
				writer.write("YES");
			else
				writer.write("NO");

			writer.flush();
		}
		catch(IOException ioexcept)
		{
			/*
				Handle It.
			*/
		}
	}
}
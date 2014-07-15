import java.io.*;

class main
{
	public static void main(String[] args) {
		
		/*
			BufferedWriter is very fast!
		*/
		BufferedReader inputStream = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter outputStream = new BufferedWriter(new OutputStreamWriter(System.out));
		String alphabet = new String("abcdefghijklmnopqrstuvwxyz");

		try
		{
			String[] lengthLetters = inputStream.readLine().split(" ");
			int length = Integer.parseInt(lengthLetters[0]);
			int chars = Integer.parseInt(lengthLetters[1]);

			/*
				Careless mistakes!.
			*/
			if(length >= chars && chars > 1)
			{
				for(int i=0;i<length-chars+2;i++)
				{
					if(i%2 == 0)
						outputStream.write("a");
					else
						outputStream.write("b");
				}

				for(int i = 2;i<chars;i++)
					outputStream.write(alphabet.charAt(i));

			}
			else if(length == chars && chars == 1)
				outputStream.write("a");
			else
				outputStream.write("-1");

			outputStream.flush();
		}
		catch(IOException ioexcept)
		{
			/*
				Handle It.
			*/
		}

	}
}
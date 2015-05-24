import java.io.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

		String keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

		String shift = reader.readLine();
		String keys = reader.readLine();

		StringBuilder corrected = new StringBuilder();
		if(shift.equals("R"))
		{
			for(int i=0;i<keys.length();i++)
				corrected.append(keyboard.charAt(keyboard.indexOf(keys.charAt(i)) - 1));
		}
		else
		{
			for(int i=0;i<keys.length();i++)
				corrected.append(keyboard.charAt(keyboard.indexOf(keys.charAt(i)) + 1));			
		}

		writer.write(corrected.toString());
		writer.flush();
	}
}
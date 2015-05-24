import java.io.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		int cases = Integer.parseInt(reader.readLine());

		int satLess = -1;
		int satGreater = -1;

		while(--cases >= 0)
		{
			String[] data = reader.readLine().split(" ");
			if( (data[0].equals(">=") || data[0].equals(">")))
			{
				if(data[2].equals("Y"))
					satGreater = Integer.parseInt(data[1]);
				else
					satLess = Integer.parseInt(data[1]);
			}
			else if( (data[0].equals("<=") || data[0].equals("<")) )
			{
				if(data[2].equals("Y"))
					satLess = Integer.parseInt(data[1]);
				else
					satGreater = Integer.parseInt(data[1]);
			}
		}

		if(satLess != -1 && satGreater != -1 && (satLess >= satGreater))
		{
			writer.write(Integer.toString((satLess+satGreater)/2));
		}
		else
			writer.write("Impossible\n");

		writer.flush();

	}
}
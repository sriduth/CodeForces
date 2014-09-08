import java.io.*;
import java.math.*;

class main
{
	public static void main(String[] args) throws Exception{
		
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));
		String number = reader.readLine();

		if(number.length() == 0)
			number = "0";

		int queries = Integer.parseInt(reader.readLine());
		for(int i=0;i<queries;i++)
		{
			String[] query = reader.readLine().split("->");
			if(query.length == 1)
				number = number.replaceAll(query[0],"");
			else
				number = number.replaceAll(query[0],query[1]);
		}

		if(number.length() == 0)
			number = "0";
		
		BigInteger a = new BigInteger(number);
		BigInteger md = new BigInteger("1000000007");
		BigInteger output = a.mod(md);

		writer.write(output.toString());
		writer.flush();
	}
}
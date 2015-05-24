import java.io.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		String[] options = reader.readLine().split(" ");

		int length = Integer.parseInt(options[0]);
		int queries = Integer.parseInt(options[1]);

		int increment = 0;

		String[] seqAsString = reader.readLine().split(" ");

		int[] seq = new int[length];

		for(int i=0;i<length;i++)
			seq[i] = Integer.parseInt(seqAsString[i]);

		for(int i=0;i<queries;i++)
		{
			String[] query = reader.readLine().split(" ");

			int qMode = Integer.parseInt(query[0]);
			int qData = Integer.parseInt(query[1]);

			if(qMode == 3)
				writer.write(Integer.toString(seq[qData - 1] + increment)+"\n");

			/*
				Save time by leaving the array elements alone and keeping an increment variable.
			 */
			else if(qMode == 2)
				increment += qData;

			else
				seq[qData - 1] = Integer.parseInt(query[2]) - increment;
		}

		writer.flush();
	}
}
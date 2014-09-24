import java.io.*;

class main
{
	public static void main(String[] args) throws Exception {
		
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		int length = Integer.parseInt(reader.readLine());
		int[] seq = new int[length];

		String[] seqString = reader.readLine().split(" ");

		for(int i=0;i<length;i++)
			seq[i] = Integer.parseInt(seqString[i]);

		for(int i =0;i<length-1;i++)
		{
			while(seq[i] > 0)
			{
				seq[i]--;
				writer.write("PR");
				// writer.write("R");
				if(seq[i+1] > 0)
				{
					seq[i+1]--;
					writer.write("P");
				}
				writer.write("L");
			}
			writer.write("R");
		}

		while(seq[length-1] > 0)
		{
			seq[length-1]--;
			writer.write("PL");
			if(seq[length-2] != 0)
			{
				seq[length-2]--;
				writer.write("P");
			}
			writer.write("R");
		}

		writer.flush();
	}
}
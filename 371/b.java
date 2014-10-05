import java.io.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		String[] data = reader.readLine().split(" ");
		int length = Integer.parseInt(data[0]);
		int period = Integer.parseInt(data[1]);

		String[] seqAsStrings = reader.readLine().split(" ");
		int[] seq = new int[length];

		for(int i=0;i<length;i++)
			seq[i] = Integer.parseInt(seqAsStrings[i]);

		int shift = 0;

		for(int i=0;i<length - period;i++)
		{
			if(seq[i] != seq[i+period])
			{
				shift += Math.abs(seq[i] - seq[i+period]);
				seq[i+period] = seq[i];
			}
		}
		
		System.out.println(shift);
	}
}
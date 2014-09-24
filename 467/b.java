import java.io.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

		String[] nmk = reader.readLine().split(" ");

		int n = Integer.parseInt(nmk[0]);
		int m = Integer.parseInt(nmk[1])+1;
		int k = Integer.parseInt(nmk[2]);

		int[] soldiers = new int[m];

		for(int i=0;i<m;i++)
			soldiers[i] = Integer.parseInt(reader.readLine());


		int count = 0;
		for(int i=0;i<m-1;i++)
		{
			int xor = soldiers[i] ^ soldiers[m-1];

			String seq = Integer.toString(xor,2);
			
			int x =0;
			for(int j=0;j<seq.length();j++)
			{
				if(seq.charAt(j) == '1')
					x++;
			}

			if(x <= k)
				count++;
		}

		System.out.println(count);
	}
}
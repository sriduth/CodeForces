import java.io.*;
import java.util.Arrays;	

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

		String[] nk = reader.readLine().split(" ");

		int n = Integer.parseInt(nk[0]);
		int k = Integer.parseInt(nk[1]);

		if(k > n)
		{
			System.out.println("-1");
			return;
		}
		
		String[] sq = reader.readLine().split(" ");

		int[] square = new int[sq.length];

		for(int i=0;i<sq.length;i++)
			square[i] = Integer.parseInt(sq[i]);

		Arrays.sort(square);

		int x = square[sq.length - k];

		System.out.println(x+" 0");
	}
}
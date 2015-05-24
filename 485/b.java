import java.io.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		int cases = Integer.parseInt(reader.readLine());

		int maxX = Integer.MIN_VALUE,
			minX = Integer.MAX_VALUE,
			maxY = Integer.MIN_VALUE,
			minY = Integer.MAX_VALUE;

		for(int i=0;i<cases;i++)
		{
			String[] q= reader.readLine().split(" ");

			int x = Integer.parseInt(q[0]);
			int y = Integer.parseInt(q[1]);

			maxX = Math.max(maxX,x);
			minX = Math.min(minX,x);

			maxY = Math.max(maxY,y);
			minY = Math.min(minY,y);
		}

		int mx = Math.max(maxX-minX,maxY-minY);
		long sol = (long)mx*mx;
		System.out.println(sol);
	}
}
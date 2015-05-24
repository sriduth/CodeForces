import java.io.*;

public class main
{
	public static void main(String args[])
	{
		BufferedReader input_ = new BufferedReader(new InputStreamReader(System.in));
		String input = "NULL";
		int n=0,k=0,a=0,b=0;
		int count =0;

		try
		{
			input = input_.readLine();
			String[] temp = input.split("\\s");
			n = Integer.parseInt(temp[0]);
			k = Integer.parseInt(temp[1]);
			a = Integer.parseInt(temp[2]);
			b = Integer.parseInt(temp[3]);
		}
		catch(IOException IOE)
		{
			System.out.print("Exception Caught");
		}

		for(int i=1;i<=b;i++)
		{
			if(a <= i)
			{
				if( (i%n == 0) && (i%k == 0) )
				{
					count++;
				}
			}
		}

		System.out.println(count);

	}
}
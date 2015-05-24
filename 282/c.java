import java.io.*;

class main
{
	/*
		If a bit is set in initial, any permutation of 1,0 can be made.
		So if a bit is set in initial, target can always be achieved, provided target itself is  ot all 0's.
	*/
	
	
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		String initial = reader.readLine();
		String target = reader.readLine();

		if(initial.length() != target.length())
		{
			System.out.println("NO");
			return;
		}

		if(initial.equals(target))
		{
			System.out.println("YES");
			return;
		}
		
		boolean a = false,b = false;

		for(int i = 0;i<initial.length();i++)
		{
			if(initial.charAt(i) == '1')
				a = true;
			if(target.charAt(i) == '1')
				b = true;
		}

		if(a == b)
			System.out.println("YES");
		
		else
			System.out.println("NO");
	}
}
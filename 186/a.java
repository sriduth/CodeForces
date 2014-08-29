import java.io.*;

class main
{
	public static void main(String[] args)throws Exception {
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		String first = reader.readLine();
		String second = reader.readLine();

		if(first.equals(second)){
			System.out.println("YES");
			return;
		}
		if(first.length() != second.length()){
			System.out.println("NO");
			return;
		}

		int[] mismatch = new int[2];
		int k=0;
		for(int i=0;i<first.length();i++)
		{
			if(first.charAt(i) != second.charAt(i)){
				if(k < 2)
					mismatch[k++] = i;

				else
				{
					System.out.print("NO");
					// RETURN >_>
					return;
				}
			}
		}
		if(first.charAt(mismatch[0]) == second.charAt(mismatch[1]) && first.charAt(mismatch[1]) == second.charAt(mismatch[0]))
		{
			System.out.println("YES");
		}
		else
			System.out.println("NO");
	}
}
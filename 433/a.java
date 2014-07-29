import java.io.*;
import java.util.*;

class main
{
	public static void main(String[] args)throws Exception {
		
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		int count = Integer.parseInt(reader.readLine());
		String[] apples = reader.readLine().split(" ");

		int a=0;
		int b=0;
		for(int i=0;i<count;i++)
		{
			if(apples[i].equals("200"))
				b++;
			else
				a++;
		}

		if(a == 0)
		{
			if(b%2 == 0){
				writer.write("YES");
				writer.flush();
				System.exit(0);
			}
			else {
				writer.write("NO");
				writer.flush();
				System.exit(0);
			}
		}
		else if(b == 0)
		{
			if(a%2 == 0){
				writer.write("YES");
				writer.flush();
				System.exit(0);
			}
			else {
				writer.write("NO");
				writer.flush();
				System.exit(0);
			}
		}
		else
		{
			if((a+2*b)%2 == 0){
				writer.write("YES");
				writer.flush();
				System.exit(0);
			}
			else {
				writer.write("NO");
				writer.flush();
				System.exit(0);
			}

		}

	}
}
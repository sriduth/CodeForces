import java.io.*;

class main
{
	public static void main(String[] args) throws Exception{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		int len = Integer.parseInt(reader.readLine());
		String st = reader.readLine();

		int count = 0;
		for(int i =0;i<len;i++)
		{
			if(st.charAt(i) == '0')
				break;
			else
				count++;
		}

		if(count < len)
			count++;

		System.out.println(count);
	}
}
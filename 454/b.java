import java.io.*;
import java.util.*;

class main{
	public static void main(String[] args)throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		int count = Integer.parseInt(reader.readLine());
		String[] dataAsString = reader.readLine().split(" ");

		int[] data = new int[count];

		for(int i=0;i<count;i++)
			data[i] = Integer.parseInt(dataAsString[i]);

		int sortBreak = -666;
		for(int i=1;i<count;i++)
		{
			if(data[i] < data[i-1])
			{
				sortBreak = i;
				i = count;
			}
		}
		if(sortBreak == -666)
		{
			writer.write("0");
			writer.flush();
			System.exit(0);
		}

		boolean flag = true;
		for(int i=sortBreak;i<count;i++)
		{
			if(data[i] < data[i-1])
			{
				flag = false;
				// -_-
				break;
			}
		}	
		
		// -_- x4
		if(!flag || data[count-1] > data[0]){
			writer.write("-1");
			writer.flush();		
			return;	
		}
		else if(flag && data[count-1] < data[0]){
			// -_- x2
			writer.write(Integer.toString(count - sortBreak));
			writer.flush();
			return;
		}
		
			writer.write("-1");
			writer.flush();	
		

	}
}
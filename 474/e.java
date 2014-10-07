import java.io.*;
import java.util.*;

class main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		String[] dat = reader.readLine().split(" ");
		String[] seq = reader.readLine().split(" ");

		int th = Integer.parseInt(dat[1]);

		SortedSet<Integer> s = new TreeSet<Integer>();

		for(int i=0;i<seq.length;i++)
		{
			SortedSet<Integer> temp = new TreeSet<Integer>();
			temp.add(i);
			int lastAdded = Integer.parseInt(seq[i]);

			for(int j=i+1;j<seq.length;j++)
			{
				if(Math.abs(Integer.parseInt(seq[j]) - lastAdded) >= th)
				{
					System.out.println(Integer.parseInt(seq[j]) +" "+ lastAdded);
					lastAdded = Integer.parseInt(seq[j]);
					temp.add(j+1);
				}
			}
			if(temp.size() >= s.size())
			{
				s = new TreeSet<Integer>(temp);
				temp.clear();
			}
			else
				temp.clear();
		}

		System.out.println(s.size());
		for(int k : s)
			System.out.print((k+1)+" ");
	}
}
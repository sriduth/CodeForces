import java.io.*;
import java.util.*;
import java.lang.*;

class main
{
	public static void main(String[] args) throws Exception {
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		int seqLength = Integer.parseInt(reader.readLine());
		String[] seqAsString = reader.readLine().split(" ");

		int[] seq = new int[seqLength];
		int mark = 0;
		int markPos = 0;
		int length_a = 1;
		int length_b = 1;
		int max = 0;
		boolean flag = true;

		for(int i=0;i<seqLength;i++)
			seq[i] = Integer.parseInt(seqAsString[i]);

		for(int i=0;i<seqLength-1;i++)
		{
			if(!flag && seq[i] < seq[i+1]) {
				length_b++;
				length_a++;
			}

			if(seq[i] < seq[i+1] && flag)
				length_a++;

			else{
				if(flag){
					mark = seq[i+1];
					markPos = i+1;
					seq[i+1] = seq[i] + 1;
					length_a++;
					length_b++;
					flag = false;
					max = Math.max(max,length_a);					
				}
				else{
					seq[markPos] = mark;
					i--;
					length_a--;
					max = Math.max(max,length_a);
					length_a = length_b;
					length_b = 0;
					flag = true;					
				}
			}
			max = Math.max(max,length_a);

		}
		writer.write(Integer.toString(max));
		writer.flush();
	}
}
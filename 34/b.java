import java.io.*;
import java.util.*;
import java.lang.*;

class main
{
	public static void main(String[] args) throws Exception{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		String[] inputs = reader.readLine().split(" ");
		String[] costsAsString = reader.readLine().split(" ");

		int[] cost = new int[costsAsString.length];
		for(int i=0;i<costsAsString.length;i++)
			cost[i] = Integer.parseInt(costsAsString[i]);

		Arrays.sort(cost);

		int earn = 0;
		for(int i=0;i<Integer.parseInt(inputs[1]);i++){
			if(cost[i] <= 0)
				earn += cost[i];
		}

		writer.write(Integer.toString(Math.abs(earn)));
		writer.flush();
	}
}
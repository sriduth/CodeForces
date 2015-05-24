import java.io.*;
import java.util.*;

class main
{
	public static void main(String[] args) throws Exception{

		BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter output = new BufferedWriter(new OutputStreamWriter(System.out));

		int a_earnings = 0;
		int g_earnings = 0;
		/*
			Get the number of eggs
		*/
		int n = Integer.parseInt(input.readLine());

		/*
			Get quotes for egg painting costs
		*/
		for(int i=0;i<n;i++)
		{
			String[] AG = input.readLine().split(" ");
			int a = Integer.parseInt(AG[0]);
			int g = Integer.parseInt(AG[1]);

			if(a_earnings + a - g_earnings<= 500){
				a_earnings += a;
				output.write('A');
			}
			else{
				g_earnings += g;
				output.write('G');

			}
		}
		output.flush();
	}
}
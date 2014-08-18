import java.io.*;
import java.util.*;

class main
{
	public static void main(String[] args) throws Exception{
		
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

		String[] coordinates = reader.readLine().split(" ");

		int[] sid = new int[4];

		for(int i=0;i<4;i++)
			sid[i] = Integer.parseInt(coordinates[i]);

		if(sid[0] != sid[2] && sid[1] != sid[3]){

			if(Math.abs(sid[0] - sid[2]) == Math.abs(sid[1]-sid[3])){
				System.out.println(sid[0]+" "+sid[3]+" "+sid[2]+" "+sid[1]);
				System.exit(0);
			}
			else{
				System.out.println("-1");
			}
		}
		else if(sid[0] == sid[2] && sid[1] != sid[3]){

			int side = sid[0] + Math.abs(sid[1] - sid[3]);
			System.out.println(side+" "+sid[3]+" "+side+" "+sid[1]);
		}
		else{

			int side = sid[1] + Math.abs(sid[0] - sid[2]);
			System.out.println(sid[0]+" "+side+" "+sid[2]+" "+side);
		}
	}
}

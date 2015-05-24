import java.io.*;
import java.util.*;

class main
{
	public static void main(String[] args) throws Exception{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		String[] colRowQuer = reader.readLine().split(" ");
		int col = Integer.parseInt(colRowQuer[0]);
		int row = Integer.parseInt(colRowQuer[1]);
		int queries = Integer.parseInt(colRowQuer[2]);

		int[][] data = new int[row][col];
		for(int i=0;i<row;i++)
		{
			String[] entryString = reader.readLine().split(" ");
			for(int j=0;j<col;j++)
				queries[i][j] = Integer.parseInt(entryString[j]);
		}
	}
}
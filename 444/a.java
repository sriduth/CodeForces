import java.io.*;
import java.lang.*;

class main
{
	public static void main(String args[])
	{
		BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));

		try
		{
			String[] nodesEdges = inputReader.readLine().split(" ");
			String[] nodeValueString = inputReader.readLine().split(" ");

			int nodes = Integer.parseInt(nodesEdges[0]);
			int edges = Integer.parseInt(nodesEdges[1]);

			int[] nodeValues = new int [nodeValueString.length];

			for(int i=0;i<nodeValueString.length;i++)
			{
				nodeValues[i] = Integer.parseInt(nodeValueString[i]);
			}

			double density = 0;

			/*
				-_-
			*/
			for(int i=0;i<edges;i++)
			{
				String[] undirectedEdge = inputReader.readLine().split(" ");
				double newDensity = (nodeValues[(Integer.parseInt(undirectedEdge[0]))-1] + 
									nodeValues[(Integer.parseInt(undirectedEdge[1])-1)])/Double.parseDouble(undirectedEdge[2]);
				density = Math.max(density,newDensity);
			} 
			
			System.out.println(density);
		}
		catch(IOException ioexcep)
		{
			/*
				Handle it >_>
			*/
		}
	}
}
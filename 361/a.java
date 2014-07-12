import java.io.*;

class main
{
	public static void main(String args[])
	{
		BufferedReader inputReader= new BufferedReader(new InputStreamReader(System.in));

		try
		{
			String[] dimensionTripper = inputReader.readLine().split(" ");

			int matrixDimension = Integer.parseInt(dimensionTripper[0]);
			int digonalElement = Integer.parseInt(dimensionTripper[1]);
			int diagonalPosition = 0;

			for(int row=0;row<matrixDimension;row++)
			{
				for(int column=0;column<matrixDimension;column++)
				{
					if(column == diagonalPosition){
						System.out.print(digonalElement+" ");
					}
					else
						System.out.print("0 ");
				}
				System.out.println();
				diagonalPosition++;

			}
		}

		catch(IOException ioexcep)
		{
			/*
				Handle it.
			*/
		}
	}
}
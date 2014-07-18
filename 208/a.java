import java.io.*;

class main
{
	public static void main(String[] args) {
		
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		try
		{
			String[] mix = reader.readLine().split("WUB");
			/*
				"split-split".split("split") -> ["","-",""]
			*/
			for(String mixSeg : mix)
			{
				if(!mixSeg.isEmpty()){
					writer.write(mixSeg);
					writer.write(" ");
				}
			}
			writer.flush();
		}
		catch(IOException ioeexcept)
		{
			/*
				Handle It.
			*/
		}
	}
}
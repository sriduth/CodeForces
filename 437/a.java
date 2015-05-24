import java.io.*;
import java.uitl.*;

class main
{
	public static void main(String[] args) throws Exception {
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		Map<Character,Integer> solMap = new LinkedHashMap<Character,Integer>(4);

		for(int i=0;i<4;i++){
			String[] datum = reader.readLine().split(".");
			solMap.put(datum[0].charAt(0),datum[1].length());
		}

		
	}
}
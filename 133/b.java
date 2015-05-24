import java.io.*;
import java.util.*;
import java.math.*;

class main
{
	public static void main(String[] args)throws Exception {

		Map<Character,String> bf = new HashMap<Character,String>();
		bf.put('>',"1000");
		bf.put('<',"1001");
		bf.put('+',"1010");
		bf.put('-',"1011");
		bf.put('.',"1100");
		bf.put(',',"1101");
		bf.put('[',"1110");
		bf.put(']',"1111");

		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		String brainFuck = reader.readLine();
		StringBuffer output = new StringBuffer();
		for(int i=0;i<brainFuck.length();i++)
			output.append(bf.get(brainFuck.charAt(i)));

		BigInteger size = new BigInteger(output.toString(),2);
		size = size.mod(new BigInteger("11110100001001000011",2));
		writer.write(size.toString(10));
		writer.flush();
	}
}
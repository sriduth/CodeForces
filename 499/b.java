import java.io.*;
import java.util.*;

class main {
	public static void main(String[] args) throws Exception {
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		String[] lectData = reader.readLine().split(" ");

		int 
			n = Integer.parseInt(lectData[0]),
			m = Integer.parseInt(lectData[1]);

		Map<String, String> languageMap = new TreeMap<String, String>();

		for(int i=0;i<m;i++) {
			String[] langStr = reader.readLine().split(" ");

			if(langStr[0].length() <= langStr[1].length() ){
				languageMap.put(langStr[1], langStr[0]);
				languageMap.put(langStr[0], langStr[0]);
			}
			else{
				languageMap.put(langStr[0], langStr[1]);
				languageMap.put(langStr[1], langStr[1]);
			}
		}

		String[] lectNotes = reader.readLine().split(" ");

		for(String str : lectNotes){
			writer.write(languageMap.get(str));
			writer.write(" ");
		}

		writer.flush();
	}
}
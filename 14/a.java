import java.io.*;
import java.util.*;

class main
{
	public static void main(String[] args) throws Exception {
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		String question = reader.readLine();

		/*
			Get rid of all whitespaces.
		*/
		question = question.replaceAll("\\s+","");

		Character[] vowels = {'A', 'E', 'I', 'O', 'U', 'Y'};
		Character[] consonants = { 'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z'};
		
		/*
			Do the thing.
		*/
		if(Arrays.asList(vowels).contains(Character.toUpperCase(question.charAt(question.length()-2))))
		{
			System.out.println("YES");
			return;
		}		
		else
			System.out.println("NO");
	}
}
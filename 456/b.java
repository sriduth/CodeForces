import java.io.*;

class main
{
	public static void main(String[] args) throws Exception {
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

		String number = reader.readLine();
		int lastDig = Character.getNumericValue(number.charAt(number.length()-1));


		int sm = 1 + (int)Math.pow(2,lastDig) + (int)Math.pow(3,lastDig) + (int)Math.pow(4,lastDig);

		sm %= 5;

		System.out.println(sm);
	}
}
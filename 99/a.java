import java.io.*;

class main
{
	public static void main(String[] args) throws Exception {
		
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		String[] number = reader.readLine().split("\\.");
		String integer = number[0];
		String _decimal = number[1];

		int units = Character.getNumericValue(integer.charAt(integer.length()-1));
		int decimal = Character.getNumericValue(_decimal.charAt(0));

		if(units != 9 && decimal <5)
			System.out.println(integer);
		
		else if(units != 9 && decimal >= 5){
			for(int i=0;i<integer.length()-1;i++){
				System.out.print(integer.charAt(i));
			}
			System.out.print(++units);
		}
		else
			System.out.println("GOTO Vasilisa.");

	}
}
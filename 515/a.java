import java.io.*;

class A {
	public static void main(String[] args) throws Exception {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));

		String s = r.readLine();
			
		String a = s + s.charAt(0);
		String b = s.charAt(s.length() - 1) + s;			

		StringBuffer sb;
		
		if(new StringBuffer(a).reverse().toString().equals(a))	{
			System.out.println(a);
			return;
		}

		if(new StringBuffer(b).reverse().toString().equals(b)) {
			System.out.println(b);
			return;
		}

		for(int i=0;i<s.length();i++) {
			sb = new StringBuffer(s);
			sb.insert(i, s.charAt(s.length() - 1 - i + (i > s.length()/2 ? 1 : 0)));					
			if(sb.toString().equals(sb.reverse().toString())) {
				System.out.println(sb.toString());
				return;
			}			
		}

		System.out.println("NA");
	}
}
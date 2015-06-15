import java.io.*;

class A {
	public static void main(String[] args) throws Exception {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		String s = r.readLine();
		int l = Integer.parseInt(r.readLine());

		if(s.length()%l != 0) {
			System.out.println("NO");
			return;
		}

		int m = s.length()/l;
		boolean stat = true;

		int a = 0;
		int b = m-1;
					
		for(int i=1;i<=l;i++) {
			StringBuffer sb = new StringBuffer(s.substring(a,b+1));
			String ca = sb.toString();
			String cb = sb.reverse().toString();
			
			stat &= ca.equals(cb);
			a = b + 1;
			b += m;
		}

		if(stat)
			System.out.println("YES");
		else
			System.out.println("NO");
	}
}
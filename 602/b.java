import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		int slen = Integer.parseInt(reader.readLine());
		String[] seq = reader.readLine().split(" ");

		int t_len = 1, len = 0;
		Set<Integer> s = new HashSet<>();

		for(int i=0;i<slen-1;i+=1) {
			for(int j=i;j<slen;j+=1) {
				s.add(Integer.parseInt(seq[j]));
				if(s.size() <= 2) {
					t_len += 1;
				} else {
					if(Collections.max(s) - Collections.min(s) <= 1) {
						len = Math.max(t_len, len);
					}					
					s = new HashSet<>();
					t_len = 1;
					i = j - 1;
					break;
				}
			}
		}		
		System.out.println(len);
	}
}
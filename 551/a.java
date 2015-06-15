import java.io.*;
import java.util.*;

class A {
	public static void main(String[] args) throws Exception {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(r.readLine());

		Map<Integer, List<Integer>> a = new TreeMap<Integer, List<Integer>>(Collections.reverseOrder()); 

		int dat[] = new int[n];

		String[] nums = r.readLine().split(" ");

		for(int i=0;i<n;i++) {			
			int temp = Integer.parseInt(nums[i]);
			dat[i] = temp;

			if(a.get(temp) == null) {
				a.put(temp, new ArrayList<Integer>());
				a.get(temp).add(i);
			}
			else {
				a.get(temp).add(i);		
			}
		}

		int pos = 1;
		for(Map.Entry<Integer, List<Integer>> d : a.entrySet()) {
			List<Integer> l = d.getValue();
			for(Integer in : l) {
				dat[in] = pos;				
			}
			pos += l.size();
		}

		for(int i : dat) {
			System.out.print(i);
			System.out.print(" ");
		}
	}
}
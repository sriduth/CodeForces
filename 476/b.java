import java.util.ArrayList;
import java.util.Scanner;

public class Main
{
	ArrayList<Integer> fin = new ArrayList<Integer>();
	
	public void work()
	{
		Scanner sc = new Scanner(System.in);
		String orig = sc.next();
		String rec = sc.next();
		
		int pos = 0;
		for(int i=0; i<orig.length(); i++)
		{
			if(orig.charAt(i) == '+')
				pos++;
			else 
				pos--;
		}
		
		solve(rec, 0, 0);
		
		int count = 0;
		for(Integer i: fin)
		{
			if(i == pos)
				count++;
		}
		
		double ans = (double) count/fin.size();
		System.out.println(ans);
	}
	
	public void solve(String str, int ind, int pos)
	{
		if(ind == str.length())
		{
			fin.add(pos);
			return;
		}
		
		switch(str.charAt(ind))
		{
		case '+': solve(str, ind+1, pos+1); return;
		
		case '-': solve(str, ind+1, pos-1); return;
		
		case '?': 
			solve(str, ind+1, pos+1);
			solve(str, ind+1, pos-1);
			return;
		}
	}
	
	public static void main(String[] args) 
	{
		Main ob = new Main();
		ob.work();
	}
}
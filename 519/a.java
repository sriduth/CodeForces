import java.io.*;
import java.util.*;

class A {
    public static Map<Character, Integer> p = new HashMap<Character, Integer>();
    static {
		p.put('q', 9);
		p.put('r', 5);
		p.put('b', 3);
		p.put('n', 3);
		p.put('p', 1);
		p.put('k', 0);
		p.put('.', 0);
    }
    public static void main(String args[]) throws Exception {
	BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
	
	int black = 0;
	int white = 0;
	
	for(int i=0;i<8;i++) {
	    String row = reader.readLine();
	    for(int j=0;j<8;j++) {
			char x = row.charAt(j);
			if(Character.isUpperCase(x)) {
		    	white += p.get(Character.toLowerCase(x));
			}
			else {
			    black += p.get(x);
			}
    	}
	}

	if(white > black){
	    System.out.println("White");
	}
	else if(black > white) {
	    System.out.println("Black");
	}
	else
	    System.out.println("Draw");	
    }
}

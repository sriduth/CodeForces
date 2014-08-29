import java.io.*;
import java.util.*;

class main
{
	public static void main(String[] args) throws Exception {
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

		String[] dat = reader.readLine().split(" ");

		int stringCount = Integer.parseInt(dat[0]);
		int stringLength = Integer.parseInt(dat[1]);

		String[] flag = new String[stringCount];
		Character[] flagColor = new Character[stringCount];

		for(int i=0;i<stringCount;i++)
			flag[i] = reader.readLine();
		
		for(int i=0;i<stringCount-1;i++)
		{
			flagColor[i] = flag[i].charAt(0);
			if(flag[i].charAt(0) == flag[i+1].charAt(0)){
				System.out.println("NO");
				return;
			}
		}

		flagColor[stringCount-1] = flag[stringCount-1].charAt(0);

		for(int i=0;i<stringCount;i++)
		{
			for(int j=0;j<stringLength;j++){
				if(flagColor[i] != flag[i].charAt(j)){
					System.out.println("NO");
					return;
				}
			}
		}

		System.out.println("YES");
	}
}
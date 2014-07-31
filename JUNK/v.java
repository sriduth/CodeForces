import java.io.*;
import java.util.*;

class main
{
    /*
        Vadervyas is careless >_>
    */
    public static void main(String args[]) throws Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        String arr[] = new String[n];
        for(int i=0; i<n; i++)
            arr[i] = br.readLine();

        for(int i=0; i<n; i++)
            System.out.println(abbreviate(arr[i]));
    }   

    public static String abbreviate(String text) throws Exception
    {
            if(text.length() <= 10) return text;

            StringBuffer word = new StringBuffer(text);
            word.replace(1, word.length() - 1, String.valueOf(word.length() - 2));

            return word.toString();
    }

}
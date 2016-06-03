
package myproj;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;



public class Userinput 
{
    public static void main(String[] args) throws IOException 
    {
        String str="";
        
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        str = br.readLine();
        System.out.println("Hello " +str);
        
    }
    
    
}

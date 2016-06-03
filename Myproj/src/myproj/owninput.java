package myproj;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class owninput {
    public static void main(String[] args) throws IOException {
        String i;
        System.out.println("Input a String : ");
        
        InputStreamReader is = new InputStreamReader(System.in);
        BufferedReader bf = new BufferedReader(is);
        
        i=bf.readLine();
        System.out.println(i);
        
    }
    
}


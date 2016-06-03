package myproj;
import java.util.Random;

public class Randomclass 
{
    public static void main(String[] args) 
    {
                Random r = new Random(); //Random class declaration...
                int a[]=new int[5];
                
                for(int i=0;i<a.length;i++)
                {
                    a[i]= r.nextInt(50);
                }
                for(int i:a) //Enhanced here
                {
                    System.out.println(i);
                }
                
                
                
                
        
    }
    
}

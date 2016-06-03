package myproj;

public class Enhancedforloop 
{
    public static void main(String[] args) 
    {
        int a[]=new int[5];
        a[0]=10;
        a[1]=20;
        a[2]=30;
        a[3]=40;
        a[4]=50;
        
        for(int i : a) //Here enhaced the for loop...    you can use like this without enhancing .."for(int i=0;i<a.length;i++)" here a.length is a array property            
            System.out.println(i);
        
        
    }
    
}

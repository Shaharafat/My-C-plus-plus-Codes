
package myproj;


public class superkeyword 
{
    public static void main(String[] args) 
    {
        sub obj=new sub(5);
        
    }
    
}

class sup
{
    
    public sup()
    {
        System.out.println("in const sup.");
    }
    
    public sup(int i)
    {
        System.out.println(i);
    }
    
}

class sub extends sup
{   
    public sub()
    {
        super();
        System.out.println("in const sub.");
    }
     public sub(int i)
    {
        super(i);
        System.out.println(i);
    }
}

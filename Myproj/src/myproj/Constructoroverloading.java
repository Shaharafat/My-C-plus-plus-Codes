package myproj;

public class Constructoroverloading 
{
    public static void main(String[] args) 
    {
        Ac obj=new Ac(10,5.555);
        
    }
    
}

class Ac()
{
    public Ac()
    {
        System.out.println("This is a constructor without parameter...");
    }
    public Ac(int i)
    {
        System.out.println(i);
    }
    public Ac(int i,double j)
    {
        System.out.println(i+" "+j);
    }
    
}

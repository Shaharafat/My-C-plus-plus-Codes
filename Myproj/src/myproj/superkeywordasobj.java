package myproj;

public class superkeywordasobj 
{
    public static void main(String[] args) 
    {
        subo su=new subo();
        su.show();
        
        
    }
    
    
}

class supo
{
    public void show()
    {
        System.out.println("This is supo...");
    }
    
}

class subo extends supo
{
    int i=5;
    
    public void show()
    {
        super.show();
        System.out.println("This is subo.");
    }
    
}

package myproj;

public class statickeyword 
{
    public static void main(String[] args) 
    {
        Ab.show();
     
        
    }
    
}

class Ab
{
    static int i=5;
    public static void show()
    {
        System.out.println("This is an static function...");
        System.out.println(i);
    }
}

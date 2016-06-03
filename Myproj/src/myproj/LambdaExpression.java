package myproj;

public class LambdaExpression {
    public static void main(String[] args) {
        B obj = new C();
        obj.show();
        
    }
    
}

interface B
{
    void show();
}

class C implements B
{
    public void show()
    {
        System.out.println("Hello...");
    }
}

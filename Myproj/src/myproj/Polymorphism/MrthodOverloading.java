
package myproj.Polymorphism;


public class MrthodOverloading {
    public static void main(String[] args) {
        A obj = new A();
        obj.show(5);
        
    }
    
}

class A  //Method Overloading / Early Binding / Static Binding / Compile Time Polymorphism...
{
    public void show()
    {
        System.out.println("Hello....");
    }
    
    public void show(int i)
    {
        System.out.println("Hello..."+i);
    }
}
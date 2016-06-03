
package myproj;


public class Singleinheritance 
{
    public static void main(String[] args) 
    {
        b obj=new b();
        obj.num1=10;
        obj.num2=5;
        obj.sum();
        System.out.println(obj.result);
        obj.sub();
        System.out.println(obj.result);

        
    }
    
}

class a
{
    int num1,num2,result=0;
    public void sum()
    {
        result=num1+num2;
    }
}
class b extends a
{
    public void sub()
    {
        result=num1=num2;
    }
}

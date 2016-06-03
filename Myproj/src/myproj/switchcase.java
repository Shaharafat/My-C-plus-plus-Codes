
package myproj;


public class switchcase 
{
    public static void main(String[] args) 
    {
        int i=6;
        switch(i)
        {
            case 1:
                System.out.println("ONE");
                break;
              
            case 2:
                System.out.println("Two");
                break;
            case 3:
                System.out.println("Three");
                break;
            case 4:       
                System.out.println("FOUR");
                break;
            default:
                System.out.println("Some Number...");
        }  
        
        String s="Hi";
        switch(s)
        {
            case "Hi":
                System.out.println("Hi");
                break;
            case "Hello":
                System.out.println("Hello");
                default:
                System.out.println("Good night");
        }
    }       
                
}

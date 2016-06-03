package myproj;

public class Wrapperclass {
    public static void main(String[] args) {
        int i=5,j;
        Integer obj = new Integer(i); //Wrapping...
        j=obj.intValue(); //Unwrapping...
        System.out.println(j);
    }
    
}

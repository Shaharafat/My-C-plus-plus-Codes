package myproj;
import java.util.Random;

public class ArrayindexoutObound 
{

    public static void main(String[] args)
    {
        Random r = new Random(); //Random class declaration...
        int a[] = new int[5];

        for (int i = 0; i < a.length; i++) {
            a[i] = r.nextInt(50);
        }
        try
        {
        System.out.println(a[8]);
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Maximum index is 4");
        }
        for(int i:a) //Enhanced here
                {
                    System.out.println(i);
                }

    }

}

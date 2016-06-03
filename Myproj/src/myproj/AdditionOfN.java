
package myproj;

import java.util.Scanner;

public class AdditionOfN {
    public static void main(String[] args) {
       Add obj = new Add();
       obj.addition();
    }
    
}

class Add
{
    int N;
    int sum=0;
    public void addition()
    {
        System.out.printf("Enter the number of N: ");
        Scanner s = new Scanner(System.in);
                
        N=s.nextInt();
        for(int i=2;i<=N;i++)
        {
            sum=sum+i;
        }
        System.out.println("Addition of N is " +sum );
    }
}

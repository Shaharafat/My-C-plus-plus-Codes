
package myproj;


public class paternhw 
{
    public static void main(String[] args) 
    {
        
        for(int i=1;i<=4;i++)
        {
            int k=i;
            int l=1;
            for(int j=1;j<=4;j++)
            {
                if(k<=4)
                {
                    System.out.printf(" %d ",k);                   
                } 
                if(k>4)
                {
                    System.out.printf(" %d ",l);
                    l++;
                }
               k++;
            }
            System.out.println("");    
            
        }
            
    }
    
}

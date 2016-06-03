#include<stdio.h>
#include<math.h>
int main()
{
   long long int i,m,n;
   int j,o,flag,p,q;
   scanf("%d",&p);
   for(q=1;q<=p;q++)
   {
      scanf("%lld",&i);
      for(float j=1;j<=63;j++)
      {
         flag=0;
         m=int (pow(2,j));
         n=int (pow(2,j+1)-1);
         for(o=2;o<=n/2;++o)
         {
            if(n%o==0)
            {
                flag=1;
                break;
            }
          }
        if ((flag==0)&&(i==(m*n)))
        {
            printf("YES, %lld is a perfect number!\n",i);
            break;
         }
          else if (j==63)
          printf("NO, %d is not a perfect number!\n",i);
          else
          continue;
         }
      }
         return 0;
   }

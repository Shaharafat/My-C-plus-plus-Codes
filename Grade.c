#include<stdio.h>
#include<time.h>
int main()
{

    int arry[10000],i,n;
    clock_t begin,end;
    double time_spent;
    scanf("%d",&i);

    begin=clock();
    for(n=0;n<i;n++)
    scanf("%d",&arry[n]);
    for(n=0;n<i;n++)
    {
        if((arry[n]>=0)&&(arry[n]<=34))
        printf("Student %d: F\n",n+1);
        else if((arry[n]>=35)&&(arry[n]<=39))
        printf("Student %d: D\n",n+1);
        else if((arry[n]>=40)&&(arry[n]<=49))
        printf("Student %d: C\n",n+1);
        else if((arry[n]>=50)&&(arry[n]<=59))
        printf("Student %d: B-\n",n+1);
        else if((arry[n]>=60)&&(arry[n]<=69))
        printf("Student %d: B+\n",n+1);
        else if((arry[n]>=70)&&(arry[n]<=79))
        printf("Student %d: A-\n",n+1);
        else if((arry[n]>=80)&&(arry[n]<=89))
        printf("Student %d: A\n",n+1);
        else
        printf("Student %d: A+\n",n+1);
    }
    end=clock();
    time_spent=(double)(end-begin)/CLOCKS_PER_SEC;
    printf("Time Elapsed: %f",time_spent);
    return 0;
}

#include<stdio.h>
#include<time.h>

int main()
{
    char c;
    int a,e,b,d;
    clock_t begin,end;
    double time_spent;
    begin=clock();
   b=10;
    printf("%d",b);

end=clock();
    time_spent=(double)(end-begin)/CLOCKS_PER_SEC;
    printf("Time Elapsed: %f",time_spent);


    return 0;
}

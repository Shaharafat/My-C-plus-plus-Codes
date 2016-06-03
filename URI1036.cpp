#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,R1,R2,R;
    scanf("%f %f %f",&a,&b,&c);
    d=((b*b)-(4*a*c));
    if(((2*a)!=0)&&(sqrt(d)==))
    {
        R1=((-b+sqrt(d))/(2*a));
        R2=((-b-sqrt(d))/(2*a));
        printf("R1 = %.5f\n",R1);
        printf("R2 = %.5f\n",R2);
    }
    else
    printf("Impossivel calcular\n");
}

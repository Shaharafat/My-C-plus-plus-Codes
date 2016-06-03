#include<stdio.h>

int fm(int date, int month,int year)
{
    int fmonth,leap;
    ///leap function... 1 for leap & 0 for non-leap
    if((year%100==0) && (year%400!=0))
        leap=0;
    else if(year%4==0)
        leap=1;
    else
        leap=0;

    fmonth=3+(2-leap)*((month+2)/(2*month))+(5*month+month/9)/2;
    ///f(m) formula
    fmonth = fmonth %7; ///bring it in range of 0 to 6
    return fmonth;
}

int day_of_week(int date, int month, int year)
{
    int dow; //day of week

    int YY = year % 100;
    int century = year / 100;

    printf("\nDate: %d/%d/%d\n\n",date,month,year);

    dow = 1.25 *  YY + fm(date,month,year) + date - 2*( century % 4); ///function of weekday for Gregorian
    dow = dow % 7; ///remainder on division by 7

    switch (dow)
        {
        case 0:
            printf("weekday = Saturday");
            break;
        case 1:
            printf("weekday = Sunday");
            break;
        case 2:
            printf("weekday = Monday");
            break;
        case 3:
            printf("weekday = Tuesday");
            break;
        case 4:
            printf("weekday = Wednesday");
            break;
        case 5:
            printf("weekday = Thursday");
            break;
        case 6:
            printf("weekday = Friday");
            break;
        default:
            printf("Incorrect data");
        }
    return 0;
}

int main()
{
    int date,month,year;

    printf("Enter the day ");
    scanf("%d",&date);

    printf("Enter the month ");
    scanf("%d",&month);

    printf("Enter the year ");
    scanf("%d",&year);

    if(date<=0||date>31||month<=0||month>12)
        {
            printf("\nINVALID INPUT\n.......TRY AGAIN.....\n\n");
            return main();
        }
    else
        day_of_week(date,month,year);

}

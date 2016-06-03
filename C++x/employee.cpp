#include<iostream>
#include<dos.h>

class Employee
{
    private:
        char* emp_name;
        int emp_join_year;
        float emp_sallary;
    public:
        Employee(char* _name,int _year,float _sallary);
    private:
        int workedyear(void);
        void printinfo(void);
};
Employee::Employee(char* _name,int _year,float _sallary)
{
    emp_name=_name;
    emp_join_year=_year;
    emp_sallary=_sallary;
    printinfo();
}

int Employee::workedyear(void)
{
    struct date current_date;
    int yeardifference;
    getdate(&current_date);
    yeardifference=current_date.da_year-emp_join_year;
    return(yeardifference);
}



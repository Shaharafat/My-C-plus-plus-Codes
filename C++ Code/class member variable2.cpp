#include<iostream>
using namespace std;

class Getaverage
        {
            public:
                char *id;
                float course[5];
                float calcavg()
                    {
                        float avg=0.00;
                        for(int i=0;i<5;i++)
                        avg+=course[i];
                        return(avg/5);
                    }
        };

int main()
{
    Getaverage niton;
    cout<<"Enter ID: ";
    cin>>niton.id;
    cout<<"\nEnter 5 score: ";
    for(int i=0;i<5;i++)
        cin>>niton.course[i];
        cout<<"Average for "<<niton.id<<"is"<<niton.calcavg();
        return 0;
}

#include<bits/stdc++.h>
using namespace std;
template <class T>
class Average
{
    T Array[5];
public:
    void Getelement()
    {
        for(int i=0;i<5;i++)
        {
            cout << endl << "Element # "<< i+1 << ":";
            cin >> Array[i];
        }
    }
    T GetAverage()
    {
        T sum = 0;
        for(int i=0;i<5;i++)
        {
            sum+=Array[i];
        }
        return (sum/5);
    }
};

int main()
{
    Average <int> iavg;
    iavg.Getelement();
    cout << endl << "Average of <int> Elements : "<<iavg.GetAverage()<<endl;

    Average <double> davg;
    davg.Getelement();
    cout << endl << "Average of <double> Elements : "<<davg.GetAverage()<<endl;
}

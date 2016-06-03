#include<bits/stdc++.h>
using namespace std;
template <class Data> Data Sum (Data elements[] ,int sizes)
{
    Data sum = 0;
    for(int i=0;i < sizes;i++)
    {
        sum += elements[i];
    }
    return sum;
}
int main()
{
    int scores[] ={10,20,30,40};
    double unit[] ={10.13456440,20.23425650,30.34356780,40.5384723970};
    int unitprice[] = {50,60,70,80};
    cout<< "Sum of scores=" <<Sum(scores,4)<<endl;
    cout<< "Sum of unitprice=" <<Sum(unitprice,4)<<endl;
    cout<< "Sum of unit= "<<Sum(unit,4)<<endl;
    return 0;
}

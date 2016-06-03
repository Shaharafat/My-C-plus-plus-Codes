#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A,K,N,PV;
    cout << "Enter the number of A,K and N respectively..." << endl;
    cin >> A >> K >> N;
    K = K / 100 ;
    PV = ( A *( (1 - (1 / pow( (1+K), N ) ) ) / K));
    printf("PV is : %.2f",PV);
    return 0;
}

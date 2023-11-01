#include <iostream>
#include<math.h>

using namespace std;
int main()
{
    int n,b=0,r=0,p=1;
    cout<<"Enter Decimal the number to convert:";
    cin>>n;
    cout<<"Binary form of "<<n<<" is :";


    while (n!=0)
{
    r=n%2;
    n= n/2;
    b=b+(r*p);
    p=p*10;
}
cout<<b;
return 0;
}

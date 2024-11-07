

//FINDING VALUE OF EXPONENTIAL FOR A GIVEN VALUE:

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int x;
double sum=0;
cout<<"Enter the value x: ";
cin>>x;
for(int i=1;i<=20;i++)
{
    float p=pow(x,i);
    double f=1.0;
    for(int j=1;j<=i;j++)
    {
        f=f*j;
    }
sum=sum+p/f;
}
cout<<"The exponential of "<<x<<" is "<<sum+1;

return 0;
}

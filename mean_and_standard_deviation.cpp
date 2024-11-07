#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float n,s,d1,d2,d3,d4;
int i=1;
float sum=0;
float sum2=0;
cout<<"Enter 10 numbers: ";
while(i<=10)
{
    cin>>n;
    sum=sum+n;
    s=n*n;
    sum2=sum2+s;
    i=i+1;
}
cout<<"The mean is "<<sum/10.0<<endl;
d1=(sum*sum)/10.0;
d2=sum2-d1;
d3=d2/9.0;
d4=sqrt(d3);
cout<<"The standard deviation is "<<d4<<endl;

return 0;
}

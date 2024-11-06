#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n,r;
int digit[100],power[100];
int i=0,j=0,total=0;
cout<<"Please input a binary number: ";
cin>>n;
cout<<"The equivalent decimal number is : ";
while(n!=0)
{
    digit[i]=n%10;
    n=n/10;
    i=i+1;
    j++;


}
for(int k=0;k<j;k++)
{
    power[k]={(pow(2,k))};
}
for(int i=0;i<j;i++)
    {
    total=total+(power[i]*digit[i]);
    }
    cout<<total;
return 0;
}

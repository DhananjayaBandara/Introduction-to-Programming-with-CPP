#include<iostream>
using namespace std;
int main()
{
    int A[10];

    cout<<"Enter 10 positive integers between 0 and 100 : ";

    for (int i=0; i<10; i++)
    {
        cin>>A[i];
    }

    int maxi=A[0],mini=A[0],sum=0;

    for (int i=0; i<10; i++)
    {
        if (maxi<A[i])
            maxi=A[i];

        if (mini>A[i])
            mini=A[i];

        sum=sum+A[i];
    }

    float avg=sum/10.00;

    cout<<"Max is "<<maxi<<endl;
    cout<<"Min is "<<mini<<endl;
    cout<<"Sum is "<<sum<<endl;
    cout<<"Average is "<<avg<<endl;

return 0;
}

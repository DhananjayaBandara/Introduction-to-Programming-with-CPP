// FINDING A GIVEN NUMBER IS A PRIME NUMBER OR NOT //
#include<iostream>
using namespace std;
int main()
{
    int n;
    char p,t,f;
    int k=2;
    cout<<"Enter a number: ";
    cin>>n;
    {
    if(n==0)
    {
        cout<<"Your input is 0";
    }
    }
    if(n>0)
    {
    while(n>k)
    {
    if(n%k!=0)
    {
        p=t;
        k=k+1;
    }
    else
       {
        cout<<n<<" is not a prime number.";
        k=0;
       }
    }
    }
    else if(n<0)
    {
        while(n<k)
        {
            if(n%k!=0)
            {
                p=t;
                k=-k+1;
            }
            else
            {
                cout<<n<<" is not a prime number.";
                k=0;
            }
        }
    }

    if(p==t)
        cout<<n<<" is a prime number.";

return 0;
}

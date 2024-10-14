#include <iostream>
using namespace std;
int main()
{
    int t,f,s,csum;
   for(int i=100;i<1000;i++)
   {
       t=i%10;
       s=(i/10)%10;
       f=i/100;
       csum=f*f*f+s*s*s+t*t*t;
       if(csum==i)
       {
           cout<<i<<" is an Armstrong number."<<endl;
       }

   }
return 0;
}

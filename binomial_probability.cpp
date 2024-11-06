#include<iostream>
#include<cmath>
using namespace std;


int factorial(int x)
{
if((x==0)||(x==1))
return 1;
int f=1;
for(int i=x;i>0;i--)
{
f=f*i;
}
return f;
}



int ncr(int n,int r)
{
int v;
v=factorial(n)/(factorial(r)*factorial(n-r));
return v;
}



float binomial(int n,int k,float p)
{
float q=1-p;
float b;
b=ncr(n,k)*pow(p,k)*pow(q,n-k);
return b;
}



int main()
{
float probability;
for(int i=0;i<5;i++)
{
probability=binomial(4,i,0.7);
cout<<"Probability for X= "<<i<<" is "<<probability<<endl;
}
return 0;
}

#include<iostream>
using namespace std;
int main()
{
int i,Max=0;
int A[10];
cout<<"Give 10 numbers one by one"<<endl;
for(i=0;i<10;i++)
    cin>>A[i];
//FINDING MAXIMUM VALUE
for(i=0;i<10;i++)
    if(Max<A[i])
    Max=A[i];
cout<<"Maximum value : "<<Max;
return 0;
}

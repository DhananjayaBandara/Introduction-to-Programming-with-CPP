#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
int n;
cout<<"Enter the total number of students:";
cin>>n;
int Mark[n];
int grade[n];
cout<<"Enter "<<n<<" Marks:";
for (int i=0; i<n; i++)
      cin>>Mark[i];
int sum=0;
for (int i=0; i<n; i++)
    sum=sum+Mark[i];
double Mean=(double)sum/n;
double STD;
for (int i=0; i<n; i++)
    STD=STD+pow((Mark[i]-Mean),2);
STD=sqrt(STD/n);
double Z[n];
for (int i=0; i<n; i++)
    Z[i]= (Mark[i]-Mean)/STD;
cout<<"The Mean of the given Marks"<<fixed<<setprecision(2)<<Mean<<endl;
cout<<"The standard deviation of the given Marks"<<fixed<<setprecision(2)<<STD<<endl;
int Max=Mark[0];
for (int i=1; i<n; i++)
    if (Mark[i]>Max)
        Max=Mark[i];

cout<<"Highest Mark of the given Marks"<<Max<<endl;
for (int i=0; i<n; i++)
  if (Z[i]>=1.50)
    cout<<" The student "<<i<<" grade is A"<<endl;
    else if (Z[i]>=1.00)
           cout<<" The student "<<i<<" grade is B"<<endl;
           else if (Z[i]>=0.00)
                cout<<" The student "<<i<<" grade is C"<<endl;
                   else if (Z[i]>=-1.00)
                    cout<<" The student "<<i<<" grade is D"<<endl;
                   else
                    cout<<" The student "<<i<<" grade is E"<<endl;
return 0;
}

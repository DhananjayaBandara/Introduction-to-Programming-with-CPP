#include<iostream>
using namespace std;
int main()
{
int A[3][4]={1,0,2,3,0,1,1,2,0,2,1,2};
int B[3][4]={1,1,2,3,1,1,1,3,0,2,0,2};
int C[3][4];

cout<<"MATRIX A: "<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
        cout<<A[i][j]<<" ";
    cout<<endl;
}
cout<<endl;

cout<<"MATRIX B: "<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
        cout<<B[i][j]<<" ";
    cout<<endl;
}
cout<<endl;



//ADDITION..............................
cout<<"ADDITION OF A+B."<<endl;
for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    C[i][j]=A[i][j]+B[i][j];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        cout<<C[i][j]<<" ";
    cout<<endl;
    }
    cout<<endl;


//SUBSTRACTION..................
cout<<"SUBSTRACTION OF A-B."<<endl;
for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    C[i][j]=A[i][j]-B[i][j];
for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
    cout<<C[i][j]<<" ";
    cout<<endl;
}
cout<<endl;


//2A...............
cout<<"2A."<<endl;
for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    C[i][j]=2*A[i][j];
for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
    cout<<C[i][j]<<" ";
    cout<<endl;
}
cout<<endl;



//ROW SUM...............
cout<<"ROW SUM OF MATRIX A."<<endl;
int sum=0;
for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
    sum=sum+A[i][j];
    cout<<"Sum of the elements at row "<<i<<" is "<<sum<<endl;
    sum=0;
}
cout<<endl;


//COLUMN SUM.............
cout<<"COLUMN SUM OF MATRIX A."<<endl;
int total=0;
for(int j=0;j<4;j++)
    {
    for(int i=0;i<3;i++)
        total=total+A[i][j];
        cout<<"Sum of the elements at column "<<j<<" is "<<total<<endl;
        total=0;
    }
cout<<endl;



return 0;
}

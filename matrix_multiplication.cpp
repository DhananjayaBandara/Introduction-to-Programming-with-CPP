#include<iostream>
using namespace std;
int main()
{
int A[3][2]={2,3,4,5,1,2};
int B[2][4]={2,4,1,0,3,2,2,1};
for(int i=0;i<3;i++)
{
    for(int j=0;j<2;j++)
        cout<<A[i][j]<<" ";
    cout<<endl;
}
cout<<endl;
for(int i=0;i<2;i++)
{
    for(int j=0;j<4;j++)
        cout<<B[i][j]<<" ";
    cout<<endl;
}
cout<<endl;

int C[3][4]={0};
for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
    {
        for(int k=0;k<2;k++)
            C[i][j]=C[i][j]+A[i][k]*B[k][j];
    }
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
        cout<<C[i][j]<<" ";
    cout<<endl;
}
return 0;
}

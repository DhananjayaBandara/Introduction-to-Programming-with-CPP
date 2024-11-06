#include<iostream>
using namespace std;
int main()
{
char w[100];
int n,j;
cout<<"Enter the length of the string: ";
cin>>n;
cout<<"Enter the characters of the string one by one (with space): "<<endl;
for(int i=0;i<n;i++)
{
    cin>>w[i];
}
j=0;
for(int i=n-1;i>=0;i--)
{
    if(w[i]==w[j])
    {
        j++;
    }
    else
    {
        j=0;
    }
}
if((j==0)||(j<n))
cout<<"The given string is not a palindrome";
else
    cout<<"The given string is a palindrome";
return 0;
}

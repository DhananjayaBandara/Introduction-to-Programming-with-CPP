#include<iostream>
using namespace std;
int main()
{
string password;
string newpassword;
cout<<"Enter your password: ";
cin>>password;
for(int i=0;i<password.length();i++)
{
    if(((password.at(i)>='a')&&(password.at(i)<='z'))||((password.at(i)>='A')&&(password.at(i)<='Z')))
        newpassword=newpassword+password.at(i);
}
cout<<"New password= "<<newpassword;
return 0;
}

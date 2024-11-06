#include<iostream>
using namespace std;
int main()
{
    char c;
    while(c!='1')
    {
cout<<"Enter the marriage code: ";
char c;
cin>>c;
switch(c)
{
    case 'm':
    case 'M':
        cout<<"Individual is married"<<endl;
        break;
    case 'd':
    case 'D':
        cout<<"Individual is divorced"<<endl;
        break;
    case 'w':
    case 'W':
        cout<<"Individual is widowed"<<endl;
        break;
    default:
    cout<<"Invalid code"<<endl;
}
    }

return 0;
}

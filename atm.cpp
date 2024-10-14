#include<iostream>
using namespace std;
int main()
{
cout<<"Please enter the withdrawal amount: ";
int n,fifty,twenty,ten;
cin>>n;
while((n<0)||(n%10!=0))
{

    cout<<"Your withdrawal amount is invalid! Please enter a valid amount."<<endl;;
    cout<<"Please enter the withdrawal amount: ";
    cin>>n;
}
fifty=n/50;
twenty=(n-fifty*50)/20;
ten=(n-fifty*50-twenty*20)/10;
cout<<fifty<<"x Rs.50 , "<<twenty<<"x Rs.20, "<<ten<<"x Rs.10";

return 0;
}

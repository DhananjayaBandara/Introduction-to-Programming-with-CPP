#include<iostream>
using namespace std;
int main()
{
int v[10];
cout<<"Enter 10 data : ";
for(int i=0;i<10;i++)
    cin>>v[i];
cout<<"Enter the key (searching element) : ";
int key,loc;
cin>>key;

//LINEAR SEARCHING.....
//bool found=false;
//int i=0;
//while(found==false)
//{
//    if(v[i]==key)
//{
//    loc=i;
//    found=true;
//}
//i=i+1;
//}
//cout<<"The location is "<<loc;



//BY FOR LOOP......
//for(int i=0;i<10;i++)
//    if(v[i]==key)
//{
//    loc=i;
//    break;
//}
//cout<<"The location is "<<loc;




//KEY IS NOT IN ARRAY......
bool found=false;
int i=0;
while(!found && i<10)
{
    if(v[i]==key)
{
    loc=i;
    found=true;
}
i=i+1;
}
if(i<10)
    cout<<"The location is "<<loc;
else
    cout<<"Your key is not there!";

return 0;
}

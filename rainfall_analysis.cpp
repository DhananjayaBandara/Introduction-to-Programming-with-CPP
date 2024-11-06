#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int sum=0;
    float a;
    int loc;
    int r[12]={95,100,120,130,135,145,155,185,190,160,130,120};
    cout<<"The year's average monthly rainfall was ";
    for(int i=0;i<12;i++)
    {
        sum=sum+r[i];
    }
    a=sum/12.0;
    cout<<a<<" mm."<<endl;
    int maxi=r[0];
    for(int i=1;i<12;i++)
    {
        if(maxi<r[i])
        {
            maxi=r[i];
            loc=i+1;
        }
    }
    cout<<"Month "<<loc<<" has the highest rainfall ("<<maxi<<" mm)."<<endl;
    cout<<endl;

    cout<<"Month"<<setw(20)<<"Rainfall(mm)"<<setw(25)<<"Classification"<<endl;
    cout<<"-------"<<setw(20)<<"--------------"<<setw(25)<<"-----------------"<<endl;

    string s;
    for(int i=0;i<12;i++)
    {
        if(r[i]>a+a*20/100.0)
        {
            s="Rainy";
        }
        else if(r[i]<a+a*25/100.0)
        {
            s="Dry";
        }
        else
        {
            s="Average";
        }
        if(i<9)
        cout<<i+1<<setw(20)<<r[i]<<setw(25)<<s<<endl;
        else
            cout<<i+1<<setw(19)<<r[i]<<setw(25)<<s<<endl;
    }

return 0;
}

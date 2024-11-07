#include<iostream>
using namespace std;
int main()
{
//A school wishes to records and analyzes the temperature of the school for a
//month. The temperatures are taken twice a day, at midday and midnight.
//Write a complete C++ program to perform the following tasks:

//i). Input (from the user) and store the temperatures in a two-dimensional
//array for a month, one column for the midday temperatures and another column for the midnight temperatures.
//You may assume that there are 30 days in a month and temperatures are measured in integers.
//ii). Calculate and print the average temperature for midday and the average temperature for midnight.
//iii).Find and print the day with the highest midday temperature and the day with the lowest midnight temperature.
//iv). Find and print the day with the highest total temperature of midday and midnight.



int temp[30][2];
for(int i=0;i<30;i++)
    for(int j=0;j<2;j++)
{
    if(j==0)
    cout<<"Enter the midday temperature of day "<<i+1<<"       : ";
    else
        cout<<"Enter the midnight temperature of the day "<<i+1<<" : ";
    cin>>temp[i][j];
}
cout<<endl;

cout<<"Midday temperatures are: "<<endl;
for(int i=0;i<30;i++)
{
    for(int j=0;j<1;j++)
        cout<<"  Day "<<i+1<<" : "<<temp[i][0]<<endl;
}
cout<<endl;
cout<<"Midnight temperatures are: "<<endl;
for(int i=0;i<30;i++)
{
    for(int j=0;j<1;j++)
    cout<<"  Day "<<i+1<<" : "<<temp[i][1]<<endl;
}
cout<<endl;


//AVERAGE TEMPERATURE OF MIDDAY.....
int sum=0;
for(int i=0;i<30;i++)
    for(int j=0;j<2;j++)
    sum=sum+temp[i][0];
cout<<"Average temperature of midday is "<<sum/30.0<<endl;

//AVERAGE TEMPERATURE OF MIDNIGHT.........
sum=0;
for(int i=0;i<30;i++)
    for(int j=0;j<2;j++)
    sum=sum+temp[i][1];
cout<<"Average temperature of midnight is "<<sum/30.0<<endl;

//DAY OF HIGHEST MIDDAY TEMPERATURE........
int maxi=temp[0][0];
int day;
for(int i=1;i<30;i++)
    for(int j=1;j<2;j++)
    if(temp[i][0]>maxi)
    {
    maxi=temp[i][0];
    day=i+1;
    j++;
    }
    cout<<"The highest midday temperature is "<<maxi<<". Which is given on day "<<day<<endl;


//DAY OF LOWEST MIDNIGHT TEMPERATURE.............
day=0;
int mini=temp[0][0];
for(int i=0;i<30;i++)
    for(int j=0;j<2;j++)
    if(temp[i][1]<mini)
{
    mini=temp[i][1];
    day=i+1;
    j++;
}
cout<<"The lowest midnight temperature is "<<mini<<". Which is given on day "<<day<<endl;


//THE DAY OF HIGHEST TOTAL TEMPERATURE.................
int total=0;
int maxsum=0;
for(int i=0;i<30;i++)
    for(int j=0;j<2;j++)
{
    total=temp[i][0]+temp[i][1];
    if(total>maxsum)
    {
        maxsum=total;
        day=i+1;
    }
    j++;

}
cout<<"The highest total temperature is "<<maxsum<<". Which is given on day "<<day<<endl;



return 0;
}

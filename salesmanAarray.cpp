#include<iostream>
using namespace std;
int main()
{
    int n;
    float fee;
    cout<<"Enter the number of salesman Entry : ";
    cin>>n;
    int sales[2*n-1];
    cout<<"Enter the salesman number and sales amount one by one (with space): "<<endl;
    for(int i=0;i<2*n;i++)
    {
        cin>>sales[i];
    }
    int salesman_no[100];
    for(int i=0;i<100;i++)
    {
      salesman_no[i]=i;
    }

    cout<<"Today Summary: salesman_no,sales_amount,fee"<<endl;
    for(int i=1;i<2*n;i=i+2)
    {
       if(sales[i]<=50000)
            fee=sales[i]*0.1;
            else
                fee=(50000*0.1)+(sales[i]-50000)*0.15;
            cout<<sales[i-1]<<","<<sales[i]<<","<<fee<<endl;
    }
    for(int i=0;i<2*n;i=i+2)
    {
       salesman_no[sales[i]]=sales[i+1];
    }


return 0;
}

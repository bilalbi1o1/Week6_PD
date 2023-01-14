#include<iostream>
using namespace std;
float price(char customer,char calltype,int minutes);


int main()
{
    char customer;
    char calltype;
    int minutes;
    float result;

    cout<<"Enter which type of customer you are(reg/pre) select(r/p) :";
    cin>>customer;
    if (customer!='r' && customer!='R' && customer!='P' && customer!='p')
    {
        cout<<"Invalid input";
        return 0;  
    }
    cout<<"Enter 'N' for night time & 'D' for day time call :";
    cin>>calltype;
    cout<<"Enter number  of minutes you used the call :";
    cin>>minutes;

    result = price(customer,calltype,minutes);
    cout<<"The charges are :"<<result<<"$";
}
float price(char customer,char calltype,int minutes)
{
    float bill;
    if(customer=='r' || customer=='R' )
    {
        if (minutes<=50)
        {
            bill = 10;
        }
        if (minutes>50)
        {
            bill = 10 +(minutes-50)*0.2;
        }
    }    
    if(customer=='p' || customer=='P' )
    { 
        if(calltype == 'D')
        {
            if(minutes<=75)
            {
                bill = 25;
            }
            else
            {
                bill = 25 + (minutes-75)*0.1;
            }
        }
        if(calltype == 'N')
        {
            if(minutes<=100)
            {
                bill = 25;
            }
            else
            {
                bill = 25 + (minutes-100)*0.05;
            }
        }

    }
       return bill;
}
#include<iostream>
using namespace std;
float price(string day,string fruit,float quantity);

int main()
{
 string day;
 string fruit;
float quantity;
float result;

cout<<"Enter day :";
cin>>day;
cout<<"Enter fruit :";
cin>>fruit;
cout<<"Enter number of Fruit(s) :";
cin>>quantity;

result = price( day, fruit, quantity);
cout<<"Payable price is : "<<result;

}
float price(string day,string fruit,float quantity)
{
float result=0;

if (day!="Sunday" && day!="Saturday")
    {
        if(fruit=="banana")
            result=quantity*2.5;
        else if(fruit=="apple")
            result=quantity*1.2;
        else if(fruit=="orange")
            result=quantity*0.85;
        else if(fruit=="grapefruit")
            result=quantity*1.45;
        else if(fruit=="kiwi")
            result=quantity*2.7;
        else if(fruit=="pineapple")
            result=quantity*5.5;
        else if(fruit=="grapes")
             result=quantity*3.85;
        else{
                cout<<"Error";
                return 0;
            }
    }
else if (day=="Sunday" || day=="Saturday")
    {
        if(fruit=="banana")
            result=quantity*2.7;
        else if(fruit=="apple")
            result=quantity*1.25;
        else if(fruit=="orange")
            result=quantity*0.9;
        else if(fruit=="grapefruit")
            result=quantity*1.6;
        else if(fruit=="kiwi")
            result=quantity*3;
        else if(fruit=="pineapple")
            result=quantity*5.6;
        else if(fruit=="grapes")        
             result=quantity*4.2;
        else
        {
        cout<<"Error";
        return 0;
        }
        
    }
    else
    {
        cout<<"Error";
    }
        return result;
}
#include<iostream>
using namespace std;
string activity(string temp,string humidity);

int main()
{
string temp;
string humidity;
string result;

cout<<"Enter Temperature(warm/cold) :";
cin>>temp;
cout<<"Enter humidity(dry/humid) :";
cin>>humidity;

result = activity( temp,humidity);
cout<<result;
}
string activity(string temp,string humidity)
{
    string result;
if(temp=="warm" && humidity=="dry")
    result="Play Tennis";
else if(temp=="warm" && humidity=="humid")
    result="Swim";
else if(temp=="cold" && humidity=="dry")
    result="Play Basketball";
else
    result="Watch Tv";

return result;
}

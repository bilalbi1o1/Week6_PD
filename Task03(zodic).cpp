#include<iostream>
using namespace std;
string sign(int day,string month);

int main()
{
int day;
string month;
string result;

cout<<"Month = ";
cin>>month;
cout<<"Day = ";
cin>>day;

result = sign( day, month);
cout<<result;

}
string sign(int day,string month)
{
string sign;

if(month=="January" && day>=20 || month=="Feburary" && day<=18)
 sign="Aquarius";
else if(month=="Feburary" && day>=19 || month=="March" && day<=20)
 sign="Pisces";
else if(month=="March" && day>=21 || month=="April" && day<=19)
 sign="Aries";
else if(month=="April" && day>=20 || month=="May" && day<=20)
 sign="Taurus";
else if(month=="MAy" && day>=21 || month=="June" && day<=20)
 sign="Gemini";
else if(month=="June" && day>=21 || month=="July" && day<=22)
 sign="Cancer";
else if(month=="July" && day>=23 || month=="August" && day<=22)
 sign="LEo";
else if(month=="August" && day>=23 || month=="September" && day<=22)
 sign="Virgo";
else if(month=="September" && day>=23 || month=="October" && day<=22)
 sign="Libra";
else if(month=="October" && day>=23 || month=="November" && day<=21)
 sign="Scorpio";
else if(month=="November" && day>=22 || month=="December" && day<=21)
 sign="Sagittarius";
else 
 sign="Capricorn";
 
 return sign;

}
#include<iostream>
using namespace std;
void result(string student,int eng,int math,int chem,int bio,int sst);

int main()
{
string student;
int eng;
int math;
int chem;
int bio;
int sst;
cout<<"Enter name of Student :";
cin>>student;
cout<<"Enter English marks :";
cin>>eng;
cout<<"Enter Math marks :";
cin>>math;
cout<<"Enter Chemistry marks :";
cin>>chem;
cout<<"Enter Biology marks :";
cin>>bio;
cout<<"Enter Social study marks :";
cin>>sst;
cout<<endl;

result(student,eng,math,chem,bio,sst);
}
void result(string student,int eng,int math,int chem,int bio,int sst)
{
  int total;
  float percent;
  string grade;

cout<<"Name of the student is :"<<student<<endl;
total = eng + math + chem + bio + sst;
cout<<"Obtained marks(out of 500) :"<<total<<endl;
percent = total/5;
cout<<"Percentage is :"<<percent<<endl;

if (percent<40)
{
    grade = "F";
} 
else if (percent>=40 && percent <=50)
{
    grade = "D";
}
else if (percent>=51 && percent <=60)
{
    grade = "c";
}
else if (percent>=61 && percent <=70)
{
    grade = "B";
}
else if (percent>=71 && percent<=80)
{
    grade = "B+";
}
else if (percent>=81 && percent<=90)
{
    grade = "A";
}
else 
{
       grade = "A+";
}

cout<<"Grade is :"<<grade;

}
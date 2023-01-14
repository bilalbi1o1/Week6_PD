#include <iostream>

using namespace std;

void time(int, int, int, int);


int main()
{
    int examhour, exammin, arrivehour, arrivemin;

    cout<<"Enter starting time of exam in hours : ";
    cin>>examhour;
    cout<<"Enter starting time of exam in minutes: ";
    cin>>exammin;
    cout<<"Enter arrival time of student in hours : ";
    cin>>arrivehour;
    cout<<"Enter arrival time of student in minutes: ";
    cin>>arrivemin;

    time(examhour, exammin, arrivehour, arrivemin);

}

void time(int examhour, int exammin, int arrivehour, int arrivemin)
{
    int exam=examhour*60+exammin;
    int arrival=arrivehour*60+arrivemin;
    float result;
    int finalHour;
    float resultHour;
    float resultMin;
    

    if(exam>arrival)
    {
         result=exam-arrival;
         if(result<=30)
        {
         cout<<"On time "<<endl;
        }
        else
        {
        cout<<"Early "<<endl;
        }
        resultHour=result/60;
        finalHour=resultHour;
        resultMin=(resultHour-finalHour)*60;
        
        if(finalHour==0)
        {
        cout<<resultMin<<" minutes before the start";
        }
        else
        {
        cout<<finalHour<<":"<<resultMin;
        cout<<" hours left before the start";
        }
    }
    else if(exam==arrival)
    {
        cout<<"On time";
    }
    else
    {
     result=arrival-exam;
    
     resultHour=result/60;
     finalHour=resultHour;
     resultMin=(resultHour-finalHour)*60;
    
    cout<<"Late"<<endl;
    if(finalHour==0)
    {
    cout<<resultMin<<" minutes late from exam";
    }
    else
    {
    cout<<finalHour<<":"<<resultMin;
    cout<<" hours late from exam";
    }
    
    }
}        
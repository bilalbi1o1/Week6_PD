#include<iostream>
#include<cmath>

using namespace std;
void position(int h,int x,int y);
int main()
{
    int h,x,y;
    cout<<"Enter height:";
    cin>>h;
    cout<<"Enter x coordinate:";
    cin>>x;
    cout<<"Enter y coordinate:";
    cin>>y;
    position(h,x,y);
}
void position(int h,int x,int y)
{
    if ((x>0 && x<3*h && y<h && y>0) || ((x>h && x<2*h) && y < 4*h && y>0))
        cout<<"Inside";
    else if (((x==0 || x==3*h ) && (y==h || y==0)) || ((x==h || x==2*h) && (y==4*h || y==0 || y==2*h || y==3*h || y==h)))
        cout<<"Border";
    else
        cout<<"Outside";
}
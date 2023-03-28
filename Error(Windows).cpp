#include <cstdio>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int time=1;
    Start:
       if (time==0)
       {
        cout<<"Let's break up."<<endl;
       }
       else if (time==1)
       {
        cout<<"I've liked you for 1 second"<<endl;
        time++;
        Sleep(1000);
        goto Start;
       }
       else
       {
        cout<<"I've liked you for "<<time<<" seconds"<<endl;
        time ++;
        Sleep(1000);
        goto Start;
       }
    return 0;
}
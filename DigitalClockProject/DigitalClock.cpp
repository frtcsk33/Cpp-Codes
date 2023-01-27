#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main(){

    time_t tarih = time(NULL);

    tm *timePtr = localtime(&tarih); 

    

    int seconds = timePtr->tm_sec;
    int minutes = timePtr->tm_min;
    int hours = timePtr->tm_hour;

    while(true){

        system("cls");

        cout<<"The digital Time is: ";

        cout<<"        "<<hours<<" : "<<minutes<<"  : "<<seconds<<"  "<<endl;

        seconds++;

        if(seconds >= 60){
            minutes++;
            seconds = 1;    
        }
        if(minutes >= 60){
            hours++;
            minutes  = 0;
        }

        if(hours >=24){
            hours = 00;
            
        }

        Sleep(1000);

        
    }


    scanf(" ");
    return 0;
}
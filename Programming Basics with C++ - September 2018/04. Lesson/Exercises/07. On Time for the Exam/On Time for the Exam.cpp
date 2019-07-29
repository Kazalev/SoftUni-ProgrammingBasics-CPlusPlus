#include <iostream>
using namespace std;

int main(){

    int examHour, examMinute, arriveHour, arriveMinute;
    cin >> examHour >> examMinute >> arriveHour >> arriveMinute;

    double examTime = (examHour * 60) + examMinute;
    double arriveTime = (arriveHour * 60) + arriveMinute;
    int diffTime = arriveTime - examTime;
    int secondDiff = examTime - arriveTime;

    if(diffTime <= 59 && diffTime > 0){
        cout << "Late" << endl;
        cout << diffTime << " minutes after the start" << endl;
    }else if(diffTime >= 60){
        int  hour = diffTime / 60;
        int  minutes = diffTime % 60;
        cout << "Late" << endl;
        cout << hour << ":" << minutes <<" hours after the start" << endl;
        }
        else if(secondDiff == 0){
            cout << "On time" << endl;
        }
        else if (secondDiff <= 30 && secondDiff > 0){
            cout << "On time" << endl;
            cout << secondDiff << " minutes before the start" << endl;
        }
        else if (secondDiff > 30 && secondDiff < 60){
            cout << "Early" << endl;
            cout << secondDiff << " minutes before the start" << endl;
        }
        else if (secondDiff >= 60){
            int hour = secondDiff / 60;
            int minutes = secondDiff % 60;
            cout << "Early" << endl;
            cout << hour << ":" << minutes <<" hours before the start" << endl;
        }


    return 0;
}

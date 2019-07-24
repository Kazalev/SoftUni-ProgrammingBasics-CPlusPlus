#include <iostream>
#include <cmath>

using namespace std;

int main (){

    double record, distance, time;
    cin >> record >> distance >> time;

    double swimTime = distance * time;
    double delay = floor(distance / 15) * 12.5;
    double sumTime = swimTime + delay;
    double notEnoughTime = sumTime - record;
    double newRecord = record > sumTime;

    if (record > sumTime){
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Yes, he succeeded! The new world record is " << sumTime << " seconds." << endl;
    }
    else{
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "No, he failed! He was " << notEnoughTime << " seconds slower." << endl;
    }

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main (){

    int steps, dancers, days;
    cin >> steps >> dancers >> days;

    double stepsPerDay = steps / days;
    double secondStep = stepsPerDay / steps;
    double percent = ceil(secondStep * 100);
    double stepsPerDancer = percent / dancers;

    if(percent <= 13){
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Yes, they will succeed in that goal! " << stepsPerDancer << "%." << endl;
    }
    else {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "No, They will not succeed in that goal! Required " << stepsPerDancer
        << "% steps to be learned per day." << endl;
    }

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main (){

    double broA, broB, broC, dadD;
    cin >> broA >> broB >> broC >> dadD;

    double time = 1/(1/broA + 1/broB + 1/broC);
    double restTime = time + time * 0.15;
    double timeLeft = dadD - restTime;

    if(timeLeft > 0 ){
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Cleaning time: " << restTime << endl;
        cout.setf(ios::fixed);
        cout.precision(0);
        cout << "Yes, there is a surprise - time left -> " << floor(timeLeft) << " hours." << endl;
    }
    else{
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Cleaning time: " << restTime << endl;
        cout.setf(ios::fixed);
        cout.precision(0);
        cout << "No, there isn't a surprise - shortage of time -> " << abs(floor(timeLeft)) << " hours." << endl;
    }

    return 0;
}

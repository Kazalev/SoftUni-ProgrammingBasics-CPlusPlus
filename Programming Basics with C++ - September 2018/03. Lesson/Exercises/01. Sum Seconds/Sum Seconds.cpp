#include <iostream>

using namespace std;

int main () {

    double secFirst, secSecond, secThird;
    cin >> secFirst >> secSecond >> secThird;

    double result = secFirst + secSecond + secThird;

    if (result < 10){
        cout << "0:0" << result << endl;
    }
    else if (result >= 10 && result < 60){
        cout << "0:" << result << endl;
    }
    else if (result >= 60 && result < 70){
        cout << "1:0" << (result - 60) << endl;
    }
    else if (result >= 70 && result < 120){
        cout << "1:" << (result - 60) << endl;
    }
    else if (result >= 120 && result < 130){
        cout << "2:0" << (result - 120) << endl;
    }
    else if (result >= 130 && result < 180){
        cout << "2:" << (result - 120) << endl;
    }

    return 0;
}

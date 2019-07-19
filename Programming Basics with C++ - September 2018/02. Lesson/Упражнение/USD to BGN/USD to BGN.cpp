#include <iostream>

using namespace std;

int main (){

    double usd;
    cin >> usd;
    double kurs = 1.79549;

    double lev = usd * kurs;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << lev << endl;

    return 0;
}

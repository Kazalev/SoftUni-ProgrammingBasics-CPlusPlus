#include <iostream>
using namespace std;

int main () {

    int table;
    cin >> table;
    double length;
    cin >> length;
    double height;
    cin >> height;

    double cover = table * (length + 2 * 0.30) * (height + 2 * 0.30);
    double kareta = table * (length /2 ) * (length / 2);

    double usd = cover * 7 + kareta * 9;
    double bgn = usd * 1.85;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << usd << " USD" << endl;
    cout << bgn << " BGN" << endl;

    return 0;
}

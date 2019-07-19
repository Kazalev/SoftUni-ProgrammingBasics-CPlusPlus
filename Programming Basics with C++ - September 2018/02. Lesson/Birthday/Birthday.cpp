#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int length, width, height;
    double percent;
    cin >> length >> width >> height >> percent;
    int volume = length * width * height;
    double liters = volume * 0.001;
    percent = percent * 0.01;
    double realLeaters = liters * (1-percent);

    cout.setf(ios::fixed);
    cout.precision(3);
    cout << realLeaters << endl;

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double length, width, sideBar;
    cin >> length >> width >> sideBar;

    double roomSize = length * width;
    double barSize = sideBar * sideBar;
    double dancing = roomSize * 0.19;
    double freeSpace = roomSize - barSize - dancing;
    double guests = freeSpace / 3.20;

    cout << ceil(guests) << endl;

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main (){


    double roomLength;
    cin >> roomLength;
    double roomWidth;
    cin >> roomWidth;
    double wardrobe;
    cin >> wardrobe;

    double roomSize = (roomLength * 100) * (roomWidth * 100);
    double wardrobeSize = (wardrobe * wardrobe) * 10000;
    double bench = roomSize / 10;
    double freeSpace = roomSize - wardrobeSize - bench;
    double numDancers = freeSpace / (40 + 7000);

    cout << floor(numDancers) << endl; // закръгляне надолу


    return 0;
}

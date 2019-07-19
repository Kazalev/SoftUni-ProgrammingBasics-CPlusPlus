#include <iostream>
#include <cmath>
using namespace std;

int main (){
    double side, height;
    cin >> side >> height;
    double area = side * height / 2;
    cout.setf(ios::fixed); /// Zakruglq rezultata do 2 znaka
    cout.precision(2);     /// sled zapetaqta
    cout << "Triangle area = " << area << endl;


    return 0;
}

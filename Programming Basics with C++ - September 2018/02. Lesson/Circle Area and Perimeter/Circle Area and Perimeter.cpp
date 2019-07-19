#include <iostream>
#include <cmath>
using namespace std;

int main (){

    double radius;
    cin >> radius;
    double pi = 3.14159265359;

    double area = pi * radius * radius;
    double perimeter = 2 * pi * radius;

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}


#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double a;
    a = abs(x1 - x2);
    double b;
    b = abs(y2 - y1);

    double area = a * b;
    double perimeter = 2 * ( a + b );


    cout << area << endl;
    cout << perimeter << endl;

    return 0;
}

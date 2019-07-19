#include <iostream>
#include <math.h>

using namespace std;

int main (){

    double rad;
    cin >> rad;
    double pi = 3.1459;

    double deg = rad * (180 / pi);
    cout << round (ceil(deg))<< endl;

    return 0;
}

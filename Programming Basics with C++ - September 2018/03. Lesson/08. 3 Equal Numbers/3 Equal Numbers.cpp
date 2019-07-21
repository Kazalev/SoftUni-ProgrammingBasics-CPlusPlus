#include <iostream>
using namespace std;

int main(){

    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}

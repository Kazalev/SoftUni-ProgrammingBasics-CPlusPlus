#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin >> n;

    int evenPow = 1;

    for(int i = 0; i <= n / 2; i++){
        cout << evenPow << endl;
        evenPow *= 4;
    }

    return 0;
}

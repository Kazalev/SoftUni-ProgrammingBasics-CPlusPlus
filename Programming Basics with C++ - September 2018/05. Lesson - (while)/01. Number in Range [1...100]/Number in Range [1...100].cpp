#include <iostream>
using namespace std;

int main(){

    int number;
    cin >> number;

    while(number < 1 || number > 100){
        cout << "Invalid number!" << endl;
        cin >> number;
    }

    cout << "The number is: " << number << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main(){

    double bonus;
    int number;
    cin >> number;

    if (number <= 100)
        if (number % 2 == 0)
    {
       cout << 5 + 1 << endl;
       cout << number + 5 + 1 << endl;
    }
    else if (number % 10 == 5)
    {
        cout << 5 + 2 << endl;
        cout << number + 5 + 2 << endl;
    }
    else
    {
    cout << 5 << endl;
    cout << number + 5 << endl;
    }


if (number > 100 && number <= 1000)
        if (number % 2 == 0) {
        cout << number * 0.20 + 1 << endl;
        cout << number + ( number * 0.20) + 1 << endl;
 }
    else if (number % 10 == 5 ){
             cout << (number * 0.20) + 2 << endl;
             cout << number + (number * 0.20) + 2 << endl;
}
    else{
        cout << number * 0.20 << endl;
        cout << number + (number * 0.20) << endl;
};

if (number > 1000)
        if (number % 2 == 0) {
        cout << number * 0.10 + 1 << endl;
        cout << number + ( number * 0.10) + 1 << endl;
 }
    else if (number % 10 == 5 ){
             cout << (number * 0.10) + 2 << endl;
             cout << number + (number * 0.10) + 2 << endl;
}
    else{
        cout << number * 0.10 << endl;
        cout << number + (number * 0.10) << endl;
};

    return 0;
}

#include <iostream>

using namespace std;

int main (){

    int payment;
    int counter = 1;
    cin >> payment;
    double sum = 0;

    cout.setf(ios::fixed);
    cout.precision(2);

    while(counter <= payment){
        double income;
        cin >> income;
        if(income < 0){
            cout << "Invalid operation!" << endl;
            break;
        }else{
        sum += income;
        cout << "Increase: " << income << endl;
        }
        counter++;
    }

    cout << "Total: " << sum << endl;



    return 0;
}

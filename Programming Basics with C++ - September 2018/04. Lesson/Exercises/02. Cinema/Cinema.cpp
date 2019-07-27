#include <iostream>
using namespace std;

int main(){

    string type;
    int rows ,columns;
    double price;

    cin >> type >> rows >> columns;

    if(type == "Premiere"){
        price = rows * columns * 12.00;
    }
    else if(type == "Normal"){
        price = rows * columns * 7.50;
    }
    else{
        price = rows * columns * 5.00;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << price << " leva" << endl;


    return 0;
}

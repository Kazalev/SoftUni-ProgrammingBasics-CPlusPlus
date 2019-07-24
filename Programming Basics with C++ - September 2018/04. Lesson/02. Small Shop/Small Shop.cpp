#include <iostream>
using namespace std;

int main(){

    string product, town;
    double quantity;
    cin >> product >> town >> quantity;

    if (town == "Sofia"){
        if (product == "coffee") cout << 0.50 * quantity << endl;
        else if (product == "water") cout << 0.80 * quantity << endl;
        else if (product == "beer") cout << 1.20 * quantity << endl;
        else if (product == "sweets") cout << 1.45 * quantity << endl;
        else if (product == "peanuts") cout << 1.60 * quantity << endl;
    }
    if (town == "Plovdiv"){
        if (product == "coffee") cout << 0.40 * quantity << endl;
        else if (product == "water") cout << 0.70 * quantity << endl;
        else if (product == "beer") cout << 1.15 * quantity << endl;
        else if (product == "sweets") cout << 1.30 * quantity << endl;
        else if (product == "peanuts") cout << 1.50 * quantity << endl;
    }
    if (town == "Varna"){
        if (product == "coffee") cout << 0.45 * quantity << endl;
        else if (product == "water") cout << 0.70 * quantity << endl;
        else if (product == "beer") cout << 1.10 * quantity << endl;
        else if (product == "sweets") cout << 1.35 * quantity << endl;
        else if (product == "peanuts") cout << 1.55 * quantity << endl;
    }


    return 0;
}

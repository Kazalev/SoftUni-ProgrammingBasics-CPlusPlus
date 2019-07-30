#include <iostream>
using namespace std;

int main(){

    string month;
    double nights, stdPrice, apPrice;
    cin >> month >> nights;

    if(month == "May" || month == "October"){
        if(nights > 7 && nights <= 14){
            stdPrice = 50.00 * 0.95;
            stdPrice = stdPrice * nights;
            apPrice = 65.00 * nights;
        }
        else if(nights > 14){
            stdPrice = 50.00 * 0.70;
            stdPrice = stdPrice * nights;
            apPrice = 65.00 * 0.90;
            apPrice = apPrice * nights;
            }
        else{
                stdPrice = 50.00 * nights;
                apPrice = 65.00 * nights;}
    }
    else if (month == "June" || month == "September"){
        if(nights > 14){
            stdPrice = 75.20 * 0.80;
            stdPrice = stdPrice * nights;
            apPrice = 68.70 * 0.90;
            apPrice = apPrice * nights;
        }
        else{
                stdPrice = 75.20 * nights;
                apPrice = 68.70 * nights;}
    }

    else if(month == "July" || month == "August"){
        if(nights > 14){
           apPrice = 77.00 * 0.90;
           apPrice = apPrice * nights;
           stdPrice = 76.00 * nights;
        }
        else{
          stdPrice = 76.00 * nights;
          apPrice = 77.00 * nights; }
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Apartment: " << apPrice << " lv." << endl;
    cout << "Studio: " << stdPrice << " lv." << endl;

    return 0;
}

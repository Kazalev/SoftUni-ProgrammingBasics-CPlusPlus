#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){

    int groupPrice, fishGroup, rent, discountRent, finnalPrice;
    string season;

    cin >> groupPrice >> season >> fishGroup;

    if(season == "Summer"){
        if(fishGroup <= 6){
            rent = 4200 * 0.90;
        }
        else if(fishGroup > 6 && fishGroup <= 11){
            rent = 4200 * 0.85;
        }
        else if(fishGroup >= 12){
            rent = 4200 * 0.75;
        }
        if(fishGroup % 2 == 0){
            discountRent = rent * 0.95;
            finnalPrice = discountRent - groupPrice;
        }else{
            finnalPrice = rent - groupPrice;
        }
    }
    else if(season == "Spring"){
        if(fishGroup <= 6){
            rent = 3000 * 0.90;
        }
        else if(fishGroup > 6 && fishGroup <= 11){
            rent = 3000 * 0.85;
        }
        else if(fishGroup >= 12){
            rent = 3000 * 0.75;
        }
        if(fishGroup % 2 == 0){
            discountRent = rent * 0.95;
            finnalPrice = discountRent - groupPrice;
        }else{
            finnalPrice = rent - groupPrice;
        }
    }
    else if(season == "Winter"){
        if(fishGroup <= 6){
            rent = 2600 * 0.90;
        }
        else if(fishGroup > 6 && fishGroup <= 11){
            rent = 2600 * 0.85;
        }
        else if(fishGroup >= 12){
            rent = 2600 * 0.75;
        }
        if(fishGroup % 2 == 0){
            discountRent = rent * 0.95;
            finnalPrice = discountRent - groupPrice;
        }else{
            finnalPrice = rent - groupPrice;
        }
    }
    else if(season == "Autumn"){
        if(fishGroup <= 6){
            rent = 4200 * 0.90;
        }
        else if(fishGroup > 6 && fishGroup <= 11){
            rent = 4200 * 0.85;
        }
        else if(fishGroup >= 12){
            rent = 4200 * 0.75;
        }
        finnalPrice = rent - groupPrice;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    if(finnalPrice >= 0){
        cout << "Not enough money! You need " << abs(finnalPrice) * 1.00 << " leva." << endl;
    }
    else{
        cout << "Yes! You have " << abs(finnalPrice) * 1.00 << " leva left." << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    string name;
    double budget;
    int beers, chipsCount;

    cin >> name >> budget >> beers >> chipsCount;

    double beerPrice = beers * 1.20;
    double singleChipsPrice = beerPrice * 0.45;
    double totalChipsPrice = ceil(singleChipsPrice * chipsCount);
    double cost = totalChipsPrice + beerPrice;


    cout.setf(ios::fixed);
    cout.precision(2);

    if(budget >= cost){
        cout << name << " bought a snack and has " << budget - cost  << " leva left." << endl;
    }else{
        cout << name << " needs " << cost - budget << " more leva!" << endl;
    }

    return 0;
}

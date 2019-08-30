#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double guests, budget;
    cin >> guests >> budget;

        double couvertPrice = guests * 20;
        double moneyLeft = budget - couvertPrice;
        double moneyFireworks = moneyLeft * 0.40;
        double moneyDonation = moneyLeft - moneyFireworks;

        if(budget - couvertPrice > 0){
        cout << "Yes! " << round(moneyFireworks) << " lv are for fireworks and " << round(moneyDonation) << " lv are for donation." << endl;
    }
    else {
        cout << "They won't have enough money to pay the covert. They will need " << round(couvertPrice) - round(budget) << " lv more." << endl;
    }

    return 0;
}

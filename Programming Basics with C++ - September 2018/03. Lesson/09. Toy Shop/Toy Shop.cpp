#include <iostream>
using namespace std;

int main(){

    double price;
    int puzzleCount, dollsCount, tedyCount, minionsCount, trucksCount;
    cin >> price >> puzzleCount >> dollsCount >> tedyCount >> minionsCount >> trucksCount;

    double profit = puzzleCount * 2.60 + dollsCount * 3 + tedyCount * 4.10 +
                    minionsCount * 8.20 + trucksCount * 2;


    int toysCount = puzzleCount + dollsCount + tedyCount + minionsCount + trucksCount;
    if (toysCount >= 50){
        profit = profit - profit * 0.25; /// 25% otstupka
    }

    profit = profit * 0.90;

    if (profit >= price){
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Yes! " << profit - price << " lv left." << endl;
    }
    else {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Not enough money! " << price - profit << " lv needed." << endl;
    }

    return 0;
}

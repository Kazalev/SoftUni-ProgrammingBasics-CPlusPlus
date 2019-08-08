#include <iostream>
#include <string>

using namespace std;

int main (){

    double tripMoney, availableMoney, svSpMoney;
    cin >> tripMoney >> availableMoney;
    string action;
    int countDays = 0;
    int countSpend = 0;

    while(true){
        cin >> action >> svSpMoney;
        countDays++;
        if(action == "spend"){
            countSpend++;
            availableMoney -= svSpMoney;
            if(svSpMoney > availableMoney){
                availableMoney = 0;
            }
        }else if(action == "save"){
            countSpend++;
            availableMoney += svSpMoney;

        }
        if(availableMoney >= tripMoney){
            cout << "You saved the money for " << countDays << " days." << endl;
            break;
        }
        if(countSpend >= 5){
            cout << "You can't save the money." << endl;
            cout << countDays << endl;
            break;
        }

    }



    return 0;
}

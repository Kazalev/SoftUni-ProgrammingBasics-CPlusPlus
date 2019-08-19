#include <iostream>
#include <string>

using namespace std;

int main(){

    string destination;
    getline(cin, destination);
    double minBudget;
    double allSaved = 0;

    while(destination != "End"){
       double savedMoney;
       cin >> minBudget;

       while(allSaved < minBudget){
        cin >> savedMoney;
        allSaved += savedMoney;
       }
       cout << "Going to " << destination << "!" << endl;
       allSaved = 0.0;
       savedMoney = 0.0;
       cin.ignore();
       getline(cin, destination);
    }

    return 0;
}

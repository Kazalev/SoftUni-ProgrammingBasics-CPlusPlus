#include <iostream>

using namespace std;

int main(){

    int age;
    double washingMachinePrice;
    int toyPrice;
    cin >> age >> washingMachinePrice >> toyPrice;

    int moneyYears = 0, toyYears = 0;

    for(int i = 1; i <= age; i++){
        if(i % 2 == 0){
            moneyYears++;
        }else{
            toyYears++;
        }
    }

    double money = 0;

    for(int i = 1; i <= moneyYears; i++){
        money += 10 * i;
    }

    money -= moneyYears;

    money += (toyPrice * toyYears);

    cout.setf(ios::fixed);
    cout.precision(2);
    if(money >= washingMachinePrice){
        cout << "Yes! " << money - washingMachinePrice << endl;
    }else{
        cout << "No! " << washingMachinePrice - money << endl;
        }

    return 0;
}

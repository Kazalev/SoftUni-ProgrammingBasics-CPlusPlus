#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double budget;
    string city;
    double overnight;

    cin >> budget;
    cin.ignore();
    getline(cin, city);
    cin >> overnight;
    double moneyForSleep = 0, totalSum = 0;


    if(city == "Cairo"){
    moneyForSleep = overnight * (250 * 2);
    totalSum = moneyForSleep + 600;
        if(overnight >= 1 && overnight <= 4){
            totalSum = totalSum * 0.97;
        }else if(overnight >= 5 && overnight <= 9){
            totalSum = totalSum * 0.95;
        }else if(overnight >= 10 && overnight <= 24){
            totalSum = totalSum * 0.90;
        }else if(overnight >= 25 && overnight <= 49){
            totalSum = totalSum * 0.83;
        }else if(overnight >= 50){
            totalSum = totalSum * 0.70;
        }
    }
    else if(city == "Paris"){
    moneyForSleep = overnight * (150 * 2);
    totalSum = moneyForSleep + 350;
        if(overnight >= 5 && overnight <= 9){
            totalSum = totalSum * 0.93;
        }else if(overnight >= 10 && overnight <= 24){
            totalSum = totalSum * 0.88;
        }
        else if(overnight >= 25 && overnight <= 49){
            totalSum = totalSum * 0.78;
        }else if(overnight >= 50){
            totalSum = totalSum * 0.70;
        }
    }
    else if(city == "Lima"){
    moneyForSleep = overnight * (400 * 2);
    totalSum = moneyForSleep + 850;
        if(overnight >= 25 && overnight <= 49){
            totalSum = totalSum * 0.81;
        }else if(overnight >= 50){
            totalSum = totalSum * 0.70;
        }
    }
    else if(city == "New York"){
    moneyForSleep = overnight * (300 * 2);
    totalSum = moneyForSleep + 650;
        if(overnight >= 1 && overnight <= 4){
            totalSum = totalSum * 0.97;
        }else if(overnight >= 5 && overnight <= 9){
            totalSum = totalSum * 0.95;
        }else if(overnight >= 10 && overnight <= 24){
            totalSum = totalSum * 0.88;
        }else if(overnight >= 25 && overnight <= 49){
            totalSum = totalSum * 0.81;
        }else if(overnight >= 50){
            totalSum = totalSum * 0.70;
        }
    }
    else if(city == "Tokyo"){
    moneyForSleep = overnight * (350 * 2);
    totalSum = moneyForSleep + 700;
        if(overnight >= 10 && overnight <= 24){
            totalSum = totalSum * 0.88;
        }else if(overnight >= 25 && overnight <= 49){
            totalSum = totalSum * 0.83;
        }else if(overnight >= 50){
            totalSum = totalSum * 0.70;
        }
    }

    double sumLeft = budget - totalSum;

    cout.setf(ios::fixed);
    cout.precision(2);
    if(budget - totalSum >= 0){
        cout << "Yes! You have " << sumLeft << " leva left." << endl;

    }else {
        cout << "Not enough money! You need " << abs(totalSum - budget) << " leva." << endl;
    }


    return 0;
}

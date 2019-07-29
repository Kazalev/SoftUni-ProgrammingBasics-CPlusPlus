#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){


    string flower;
    int num, budget;
    double price, finnalPrice;
    cin >> flower >> num >> budget;

    if(flower == "Roses"){
        if(num > 80){
            price = 5.00 * 0.90;
            finnalPrice = price * num;
            finnalPrice = finnalPrice - budget;
        }else{
        finnalPrice = num * 5.00;
        finnalPrice = finnalPrice - budget;
        }
    }
    if(flower == "Dahlias"){
        if(num > 90){
            price = 3.80 * 0.85;
            finnalPrice = price * num;
            finnalPrice = finnalPrice - budget;
        }else{
        finnalPrice = num * 3.80;
        finnalPrice = finnalPrice - budget;
        }
    }
    else if(flower == "Tulips"){
        if(num > 80){
            price = 2.80 * 0.85;
            finnalPrice = price * num;
            finnalPrice = finnalPrice - budget;
        }else{
        finnalPrice = num * 2.80;
        finnalPrice = finnalPrice - budget;
        }
    }
    else if(flower == "Narcissus"){
        if(num < 120){
            price = (3.00 * 0.15) + 3.00;
            finnalPrice = price * num;
            finnalPrice = finnalPrice - budget;
        }else{
        finnalPrice = num * 3.00;
        finnalPrice = finnalPrice - budget;
        }
    }
     else if(flower == "Gladiolus"){
        if(num < 80){
            price = (2.50 * 0.20) + 2.50;
            finnalPrice = price * num;
            finnalPrice = finnalPrice - budget;
        }else{
        finnalPrice = num * 2.50;
        finnalPrice = finnalPrice - budget;
        }
    }


    cout.setf(ios::fixed);
    cout.precision(2);
    if(finnalPrice <= 0){
        cout << "Hey, you have a great garden with " << num << " " << flower << " and " << abs(finnalPrice)<< " leva left." << endl;
    } else {
        cout << "Not enough money, you need " << abs(finnalPrice) << " leva more." <<endl;
    }


    return 0;
}

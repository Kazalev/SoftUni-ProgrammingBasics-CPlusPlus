#include <iostream>

using namespace std;

int main(){

    double budget;
    string category;
    int groupCount;

    cin >> budget >> category >> groupCount;

    if(groupCount <= 4){
        budget = budget - budget * 0.75;
    }
    else if(groupCount <= 9){
        budget = budget - budget * 0.60;
    }
    else if(groupCount <= 24){
        budget = budget - budget * 0.50;
    }
    else if(groupCount <= 49){
        budget = budget - budget * 0.40;
    }
    else{
        budget = budget - budget * 0.25;
    }

    double ticketsPrice;

    if(category == "VIP"){
        ticketsPrice = 499.99 * groupCount;
    }
    else{
        ticketsPrice = 249.99 * groupCount;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    if(budget >= ticketsPrice){
        cout << "Yes! You have " << budget - ticketsPrice << " leva left." << endl;
    }
    else{
        cout << "Not enough money! You need " << ticketsPrice - budget << " leva." << endl;
    }

    return 0;
}

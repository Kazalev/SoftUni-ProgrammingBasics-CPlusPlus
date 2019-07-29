#include <iostream>

using namespace std;

int main(){

    double budget;
    string season, place;
    cin >> budget >> season;

    cout.setf(ios::fixed);
    cout.precision(2);


    if(budget <= 100){
        if(season == "summer"){
        place = "Camp";
        budget = budget * 0.30;
    }else if(season == "winter"){
        place = "Hotel";
        budget = budget * 0.70;
        }
        cout << "Somewhere in Bulgaria" << endl;
        cout << place << " - " << budget << endl;
    }

    else if(budget <= 1000){
        if(season == "summer"){
        place = "Camp";
        budget = budget * 0.40;
    }else if(season == "winter"){
        place = "Hotel";
        budget = budget * 0.80;
        }
        cout << "Somewhere in Balkans" << endl;
        cout << place << " - " << budget << endl;
    }

    else if(budget > 1000){
        place = "Hotel";
        budget = budget * 0.90;
        cout << "Somewhere in Europe" << endl;
        cout << place << " - " << budget << endl;
    }

    return 0;
}

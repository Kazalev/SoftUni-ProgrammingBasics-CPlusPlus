#include <iostream>

using namespace std;

int main(){

    int degrees;
    string partDay, outfit, shoes;
    cin >> degrees >> partDay;

    if(degrees >= 10 && degrees <= 18){
        if(partDay == "Morning"){
            outfit = "Sweatshirt";
            shoes = "Sneakers";
            }
            else if(partDay == "Afternoon"){
            outfit = "Shirt";
            shoes = "Moccasins";
            }
            else if(partDay == "Evening"){
            outfit = "Shirt";
            shoes = "Moccasins";
            }
    }
    else if(degrees > 18 && degrees <= 24){
         if(partDay == "Morning"){
            outfit = "Shirt";
            shoes = "Moccasins";
            }
            else if(partDay == "Afternoon"){
            outfit = "T-Shirt";
            shoes = "Sandals";
            }
            else if(partDay == "Evening"){
            outfit = "Shirt";
            shoes = "Moccasins";
            }
    }
    else if(degrees >= 25){
         if(partDay == "Morning"){
            outfit = "T-Shirt";
            shoes = "Sandals";
            }
            else if(partDay == "Afternoon"){
            outfit = "Swim Suit";
            shoes = "Barefoot";
            }
            else if(partDay == "Evening"){
            outfit = "Shirt";
            shoes = "Moccasins";
            }
    }

    cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << "." << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){

    int budget, objectsCount;
    cin >> budget >> objectsCount;

    int cost = 0;
    for(int i = 0; i < objectsCount; i++){
        string type;
        cin >> type;

        if(type == "hoodie"){
            cost += 30;
        }else if(type == "keychain"){
            cost += 4;
        }else if(type == "T-shirt"){
            cost += 20;
        }else if(type == "flag"){
            cost += 15;
        }
        else if(type == "sticker"){
            cost += 1;
        }
    }

    if(budget >= cost){
        cout << "You bought " << objectsCount << " items and left with " << budget - cost << " lv." << endl;
    }else {
        cout << "Not enough money, you need " << cost - budget << " more lv." << endl;
    }


    return 0;
}

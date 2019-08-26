#include <iostream>
#include <string>

using namespace std;

int main(){

    string team, type;
    int countOfSouvenirs;
    cin >> team >> type >> countOfSouvenirs;

    double price = 0;

    if(team == "Argentina"){
        if(type == "flags"){
            price = 3.25;
        }else if(type == "caps"){
            price = 7.20;
        }else if(type == "posters"){
            price = 5.10;
        }else if(type == "stickers"){
            price = 1.25;
        }else{
            cout << "Invalid stock!" << endl;
        }

    }else if(team == "Brazil"){
        if(type == "flags"){
            price = 4.20;
        }else if(type == "caps"){
            price = 8.50;
        }else if(type == "posters"){
            price = 5.35;
        }else if(type == "stickers"){
            price = 1.20;
        }else{
            cout << "Invalid stock!" << endl;
        }

    }else if(team == "Croatia"){
        if(type == "flags"){
            price = 2.75;
        }else if(type == "caps"){
            price = 6.90;
        }else if(type == "posters"){
            price = 4.95;
        }else if(type == "stickers"){
            price = 1.10;
        }else{
            cout << "Invalid stock!" << endl;
        }

    }else if(team == "Denmark"){
        if(type == "flags"){
            price = 3.10;
        }else if(type == "caps"){
            price = 6.50;
        }else if(type == "posters"){
            price = 4.80;
        }else if(type == "stickers"){
            price = 0.90;
        }else{
            cout << "Invalid stock!" << endl;
        }

    }else{
        cout << "Invalid country!" << endl;
    }

    if(price != 0){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Pepi bought " << countOfSouvenirs << " " << type << " of " << team << " for " << price * countOfSouvenirs << " lv." << endl;
    }

    return 0;
}

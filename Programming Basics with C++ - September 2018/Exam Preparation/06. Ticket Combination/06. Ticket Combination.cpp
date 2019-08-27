#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int counter = 0;
    for(char evenCapital = 'B'; evenCapital <= 'L'; evenCapital+=2){ ///Главна латинска буква с четен ASCII код от B до L
        for(char lowerLetter = 'f'; lowerLetter >= 'a'; lowerLetter--){
            for(char capital = 'A'; capital <= 'C'; capital++){
                for(int firstNum = 1; firstNum <= 10; firstNum++){
                    for(int secondNum = 10; secondNum >= 1; secondNum--){
                        counter++;
                        if(counter == n){
                            cout << "Ticket combination: " << evenCapital << lowerLetter << capital << firstNum << secondNum << endl;
                            int prize = evenCapital + lowerLetter + capital + firstNum + secondNum;
                            cout << "Prize: " << prize << " lv." << endl;
                        }
                    }
                }
            }
        }
    }


    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){

    int cupVolume;
    cin >> cupVolume;
    int counter = 0;
    int overallVolume = 0;
    int volume = 0;

    string buttons;

    while(overallVolume < cupVolume){
        cin >> buttons;
        if(buttons == "Easy"){
            volume = 50;
        }else if(buttons == "Medium"){
            volume = 100;
        }else if (buttons == "Hard") {
            volume = 200;}

    overallVolume += volume;
    counter++;
    }

    if (overallVolume > cupVolume){
        double spilledWater = overallVolume - cupVolume;
        cout << spilledWater << "ml has been spilled." << endl;
    }else{
        cout << "The dispenser has been tapped " << counter << " times." << endl;
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){

    int minutes;
    string name;

    cin >> minutes;
    cin.ignore();
    getline(cin, name);


    if(minutes == 0){
            cout << "Match has just began!" << endl;
        }

    if(minutes >= 1 && minutes <= 10){
        cout << "First half time."  << endl;
        cout << name << " missed a penalty." << endl;
        if(minutes % 2 == 0){
            cout << name << " was injured after the penalty." << endl;
        }
    }
    if(minutes > 10 && minutes <= 35){
        cout << "First half time."  << endl;
        cout << name << " received yellow card." << endl;
        if(minutes % 2 == 1){
            cout << name << " got another yellow card." << endl;
        }
    }
    if(minutes > 35 && minutes <= 45){
        cout << "First half time."  << endl;
        cout << name << " SCORED A GOAL !!!" << endl;
    }
    if(minutes > 45 && minutes <= 55){
        cout << "Second half time." << endl;
        cout << name << " got a freekick." << endl;
        if(minutes % 2 == 0){
            cout << name << " missed the freekick." << endl;
        }
    }
    if(minutes > 55 && minutes <= 80){
        cout << "Second half time." << endl;
        cout << name << " missed a shot from corner." << endl;
        if(minutes % 2 == 1){
            cout << name << " has been changed with another player." << endl;
        }
    }
    if(minutes > 80 && minutes <= 90){
        cout << "Second half time." << endl;
        cout << name << " SCORED A GOAL FROM PENALTY !!!" << endl;
    }

    return 0;
}

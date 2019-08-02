#include <iostream>
#include <string>

using namespace std;

int main(){

    int stepsLimit = 10000;
    int steps = 0;
    string input;

    getline (cin, input);

    while(input != "Going home"){
        steps += stoi(input);
        if(steps >= stepsLimit){
            break;
        }
        getline(cin, input);
    }

    if (input == "Going home"){
        string stepsToHomeAsStr;
        getline(cin, stepsToHomeAsStr);
        steps += stoi(stepsToHomeAsStr);
    }

    if(steps >= stepsLimit){
        cout << "Goal reached! Good job!" << endl;
    }else{
    cout << stepsLimit - steps << " more steps to reach goal." << endl; }

    return 0;
}

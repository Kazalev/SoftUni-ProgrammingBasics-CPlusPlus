#include <iostream>
#include <string>

using namespace std;

int main(){

    string team;
    int matches;
    cin >> team >> matches;

    int countMatches = 0;
    int points = 0;
    int sumScoredGoals = 0, sumRecievedGoals = 0;
    int goalDifference = 0;

    while(countMatches != matches){
        int scoredGoals, recievedGoals;
        cin >> scoredGoals >> recievedGoals;
        countMatches++;

        sumScoredGoals += scoredGoals;
        sumRecievedGoals += recievedGoals;

        if(recievedGoals > scoredGoals){
            goalDifference = recievedGoals - scoredGoals;
        }else if(recievedGoals == scoredGoals){
            goalDifference = recievedGoals - scoredGoals;
            points++;
        }else if(recievedGoals < scoredGoals){
            goalDifference = scoredGoals - recievedGoals;
            points += 3;
        }
    }

    if(sumScoredGoals >= sumRecievedGoals){
        cout << team << " has finished the group phase with " << points << " points." << endl;
        cout << "Goal difference: " << sumScoredGoals - sumRecievedGoals << "." << endl;
    }else{
        cout << team << " has been eliminated from the group phase. " << endl;
        cout << "Goal difference: " << sumScoredGoals - sumRecievedGoals << "." << endl;
    }


    return 0;
}

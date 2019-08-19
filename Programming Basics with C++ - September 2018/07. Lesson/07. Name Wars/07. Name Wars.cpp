#include <iostream>
#include <string>

using namespace std;

int main(){

    string name;
    cin >> name;

    int maxSum = 0;
    string maxName;

    while(name != "STOP"){

        int currSum = 0;

        for(int i = 0; i < name.size(); i++){
            currSum += name[i];
        }

        if(currSum > maxSum){
            maxSum = currSum;
            maxName = name;
        }

        cin >> name;
    }

    cout << "Winner is " << maxName << " - " << maxSum << "!" << endl;


    return 0;
}


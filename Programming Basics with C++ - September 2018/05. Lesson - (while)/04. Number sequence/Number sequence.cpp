#include <iostream>
#include <string>

using namespace std;

int main(){

    string number;
    cin >> number;

    int maxNum = INT_MIN;
    int minNum = INT_MAX;

    while(number != "END"){
        int currentNum;
        currentNum = stoi(number);

        if(currentNum > maxNum){
            maxNum = currentNum;
        }
        if(currentNum < minNum){
            minNum = currentNum;
        }

        cin >> number;
    }

    cout << "Max number: " << maxNum << endl;
    cout << "Min number: " << minNum << endl;

    return 0;
}

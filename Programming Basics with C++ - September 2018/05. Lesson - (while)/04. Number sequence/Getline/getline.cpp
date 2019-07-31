#include <iostream>
#include <string>

using namespace std;

int main(){

    string numberAsStr;

    getline(cin, numberAsStr);
    int sum = 0;
    while(numberAsStr != "print sum"){
        int currentNum;
        cout << numberAsStr << endl;
        currentNum = stoi(numberAsStr);
        sum = sum + currentNum; ///sum += currentNum;

        getline(cin, numberAsStr);
    }

    cout << sum << endl;

    return 0;
}

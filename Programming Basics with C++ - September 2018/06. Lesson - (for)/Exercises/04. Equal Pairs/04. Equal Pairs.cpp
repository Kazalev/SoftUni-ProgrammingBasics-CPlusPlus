#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin >> n;

    int firstPair = 0;
    int secondPair = 0;
    int maxDiff = INT_MIN;

    bool equal = true;

    for(int i = 0; i < n; i++){
        int firstNumber, secondNumber;
        cin >> firstNumber >> secondNumber;

        if(i % 2 == 0){
            firstPair = firstNumber + secondNumber;
        }
        else{
            secondPair = firstNumber + secondNumber;
        }

        if(n == 0){
            equal = true;
        }
        if(i > 0){
            if(firstPair == secondPair){
                equal = true;
            }
            else{
                equal = false;
                    if (maxDiff < abs(firstPair - secondPair))
                    {
                    maxDiff = abs(firstPair - secondPair);
                    }
            }

        }
    }

    if (equal == true)
    {
        cout << "Yes, value=" << firstPair << endl;
    }
    else
    {
        cout << "No, maxdiff=" << maxDiff << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int evenSum = 0;
    int oddSum = 0;
    int oddMin = INT_MAX;
    int oddMax = INT_MIN;
    int evenMin = INT_MAX;
    int evenMax = INT_MIN;

    for(int i = 0; i < n; i++){
        int number = 0;
        cin >> number;
        if(i % 2 == 0)
        {
            evenSum += number;

            if(number > evenMax)
            {
                evenMax = number;
            }
            if(number < evenMin)
            {
                evenMin = number;
            }
        }

        else
        {
            if(i % 2 != 0)
            {
                oddSum += number;

                if(number > oddMax)
                {
                    oddMax = number;
                }
                if(number < oddMin)
                {
                    oddMin = number;
                }
            }

        }
    }

    cout << "OddSum= " << oddSum << "," << endl;
    if(oddSum == 0)
    {
        cout << "OddMin= " << "No" << "," << endl;
        cout << "OddMax= " << "No" << "," <<endl;
    }
    else
    {
        cout << "OddMin= " << oddMin << "," << endl;
        cout << "OddMax= " << oddMax << "," << endl;
    }

    cout << "EvenSum= " << evenSum << "," << endl;

    if(evenSum == 0)
    {
        cout << "EvenMin= " << "No" << "," << endl;
        cout << "EvenMax= " << "No" << endl;
    }
    else
    {
        cout << "EvenMin= " << evenMin << "," << endl;
        cout << "EvenMax= " << evenMax << endl;
    }


    return 0;
}

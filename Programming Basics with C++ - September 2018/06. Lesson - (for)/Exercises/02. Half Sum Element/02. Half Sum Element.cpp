#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin >> n;

    int sumNum = 0;
    int max = INT_MIN;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        sumNum += num;

        if(num > max){
            max = num;
        }

    }

    if(sumNum == 2 * max){
            cout << "Yes" << endl;
            cout << "Sum = " << max << endl;
    }else{
            cout << "No"  << endl;
            cout << "Diff = " << abs(2 * max - sumNum) << endl;
    }

    return 0;
}

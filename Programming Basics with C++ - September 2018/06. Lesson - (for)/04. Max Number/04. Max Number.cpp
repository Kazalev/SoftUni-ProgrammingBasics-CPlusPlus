#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int maxNum = INT_MIN;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num > maxNum){
            maxNum = num;
        }
    }
    cout << maxNum << endl;

    return 0;
}

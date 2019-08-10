#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int minNum = INT_MAX;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num < minNum){
            minNum = num;
        }
    }
    cout << minNum << endl;

    return 0;
}


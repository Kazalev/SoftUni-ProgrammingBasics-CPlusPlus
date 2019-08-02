#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int num = 1;
    cout << num << endl;

    while(2 * num + 1 <= n){
        num = 2 * num + 1;
        cout << num << endl;
    }

    return 0;
}

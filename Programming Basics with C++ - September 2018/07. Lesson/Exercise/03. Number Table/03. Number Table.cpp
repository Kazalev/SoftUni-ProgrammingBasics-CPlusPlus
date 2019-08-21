#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int num = 0;

    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n; col++){
            if(num <= n){
                num = row + col - 1;
            }
            if(num > n){
                num = 2 * n - num;
            }
            cout << num << " ";
        }
        cout << endl;
    }


    return 0;
}

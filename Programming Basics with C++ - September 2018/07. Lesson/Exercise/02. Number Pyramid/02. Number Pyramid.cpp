#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int num = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << num << " " ;
            num++;
            if(num == n+1){
                return 0;
            }
        }
        cout << endl;
    }


    return 0;
}

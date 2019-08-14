#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int p1 = 0, p2 = 0, p3 = 0;

    for(int i = 0; i < n; i++){
        int numbers;
        cin >> numbers;

        if(numbers % 2 == 0){
            p1++;
        }
        if(numbers % 3 == 0){
            p2++;
        }
        if(numbers % 4 == 0){
            p3++;
        }
    }
        double percent1 = p1 * 1.00 / n * 100;
        double percent2 = p2 * 1.00 / n * 100;
        double percent3 = p3 * 1.00 / n * 100;

        cout.setf(ios::fixed);
        cout.precision(2);
        cout << percent1 << "%" << endl;
        cout << percent2 << "%" << endl;
        cout << percent3 << "%" << endl;

    return 0;
}

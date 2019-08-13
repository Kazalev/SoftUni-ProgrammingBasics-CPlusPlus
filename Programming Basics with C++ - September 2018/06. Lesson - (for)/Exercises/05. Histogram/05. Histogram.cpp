#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n;

    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    for(int i = 0; i < n; i++){
        int numbers;
        cin >> numbers;

        if(numbers < 200){
            p1++;
        }
        else if(numbers >= 200 && numbers <= 399){
            p2++;
        }
        else if(numbers >= 400 && numbers <= 599){
            p3++;
        }
        else if(numbers >= 600 && numbers <= 799){
            p4++;
        }
        else if(numbers >= 800){
            p5++;
        }
    }
        double percent1 = p1 * 1.00 / n * 100;
        double percent2 = p2 * 1.00 / n * 100;
        double percent3 = p3 * 1.00 / n * 100;
        double percent4 = p4 * 1.00 / n * 100;
        double percent5 = p5 * 1.00 / n * 100;

        cout.setf(ios::fixed);
        cout.precision(2);
        cout << percent1 << "%" << endl;
        cout << percent2 << "%" << endl;
        cout << percent3 << "%" << endl;
        cout << percent4 << "%" << endl;
        cout << percent5 << "%" << endl;

    return 0;
}
